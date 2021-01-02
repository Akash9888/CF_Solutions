
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
#define   MOD           1000000007
using namespace std;
 
 
int main(){
    ios_base::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--){
        int n,a,zero=0,x,y;
        cin>>n;
        vi v;
        for(int i=0;i<n;i++){
            cin>>a;
            if (a==0)zero++;
            v.pb(a);
        }
        for(int i=0;i<v.size();i++){
            if(v[i]==1){x=i;break;}
        }
        for(int i=v.size()-1;i>=0;i--){
            if(v[i]==1){y=i;break;}
        }
        zero-=x;
        zero-=(n-1)-y;
        cout<<zero<<endl;
    }
 
return 0;
}
 
 
 
