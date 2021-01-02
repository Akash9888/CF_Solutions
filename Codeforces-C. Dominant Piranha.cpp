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
    ll t;
    cin>>t;
    while(t--){
        ll n,a,index=-1;
        cin>>n;
        vll v;
        v.pb(0);
        multimap<ll,ll>m;
 
        for(int i=1;i<=n;i++){
            cin>>a;
            v.pb(a);
            m.insert(mp(a,i));
        }
        for(auto it=m.rbegin();it!=m.rend();it++){
            ll x=it->S + 1;
            ll y=it->S - 1 ;
 
            if((x<=n) && (v[x]<(it->F))){index=it->S;break;}
            if((y>=1) && (v[y]<(it->F))){index=it->S;break;}
        }
        cout<<index<<endl;
 
    }
 
return 0;
}
 
