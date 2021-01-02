 
/*
    Author Name: Akash Chanda Tushar(CSE,LU)
*/
#include<bits/stdc++.h>
#define   ll            long long int
#define   ull           unsigned long long
#define   endl          "\n"
#define   vi            vector<int>
#define   vll           vector<ll>
#define   vpi           vector<pair<int,int>>
#define   vpll          vector<pair<ll,ll>>
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
        ll n;
        cin>>n;
        vpll v;
        vll ans;
 
        for(ll i=2;i*i<=n;i++){
            int cnt=0;
            while(n%i==0){
                cnt++;
                n/=i;
            }
            if(cnt>0) v.pb({cnt,i});
        }
        if(n>1)v.pb({1,n});
 
        sort(all(v));
        reverse(all(v));
 
        for(int i=0;i<v[0].F;i++)ans.pb(v[0].S);
 
        for(int i=1;i<(int)v.size();i++){
            for(int j=0;j<v[i].F;j++){
                ans[ans.size()-1]*=v[i].S;
            }
        }
 
        cout<<ans.size()<<endl;
 
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
 
 
    }
 
 
return 0;
}
 
