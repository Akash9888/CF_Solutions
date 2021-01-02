#include<bits/stdc++.h>
#define   ll            long long int
#define   endl          "\n"
#define   vi            vector<int>
#define   vll           vector<ll>
#define   pb            push_back
#define   all(p)        p.begin(),p.end()
#define   F             first
#define   S             second
#define   mp            make_pair
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--){
        int n,temp1=0,temp2=0,c=0,x=0;
        cin>>n;
        vi v1,v2;
 
        for(int i=0;i<n;i++){int a; cin>>a; v1.pb(a);}
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            v2.pb(a);
            if(v2[i] != v1[i]){
                if(c==0){temp1=i;temp2=i;c++;x+=abs(v2[i]-v1[i]);}
                else temp2=i;
            }
        }
 
        for(int i=temp1;i<=temp2;i++) v1.at(i)=v1[i]+x;
        bool f=true;
 
        for(int i=0;i<n;i++){
             if(v1[i] != v2[i]){f=false;break;}
        }
        if(f)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
 
    }
 
 
return 0;
}
 
