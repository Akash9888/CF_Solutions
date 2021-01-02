#include<bits/stdc++.h>
#define   ll            long long int
#define   endl          "\n"
#define   vi            vector<int>
#define   vll           vector<ll>
#define   pb            push_back
#define   eb            emplace_back
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
        ll n,a;
        cin>>n;
        vector<pair<ll,ll>>v;
 
        for(int i=0;i<n;i++){
           cin>>a;
           v.eb(mp(a,i));
        }
 
 
        map<ll,ll>s;
        for(int i=0;i<v.size();i++){
            ll x=v[i].F;
            for(int j=i+1;j<v.size();j++){
                ll y=v[j].F;
                if(x!=y){
                    s.insert(mp(v[j].S+1,v[i].S+1));
                    s.insert(mp(v[i].S+1,v[j].S+1));
                }
            }
        }
        if(s.size()==0)cout<<"NO"<<endl;
        else{
           cout<<"YES"<<endl;
           auto it2=s.begin();
           it2++;
           for(auto it=it2;it!=s.end();it++)cout<<it->F<<" "<<it->S<<endl;
        }
 
    }
 
return 0;
}
 
 
