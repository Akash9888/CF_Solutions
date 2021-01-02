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
    int t=1;
    cin>>t;
    while(t--){
        ll n,a,mn=INT_MAX;
        cin>>n;
        vi v,v2,v3;
 
        for(int i=0;i<n;i++){
           cin>>a;
           if(a<mn)mn=a;
           v.pb(a);
        }
 
        for(int i=0;i<v.size();i++){
            if(v[i]%mn==0){
                v2.pb(v[i]);
                v3.pb(i);
                v[i]=-1;
            }
        }
 
        sort(all(v2));
 
        for(int i=0;i<v3.size();i++) v[v3[i]]=v2[i];
 
        bool f=true;
        for(int i=0;i<v.size()-1;i++){
            if(v[i]>v[i+1]){f=false;break;}
        }
 
        if(f)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
 
 
return 0;
}
 
