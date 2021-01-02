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
 
 
bool check (ll n,ll cnt,vll v){
        ll cnt2=0;
        bool f=false;
        for(int i=0;i<n-1;i++){
                cnt2+=v[i];
                if(cnt2>=cnt){f=true;break;}
        }
 
        return f;
}
 
void solve(){
        ll a,n,sum=0;
        cin>>n;
        vll v;
         for(int i=0;i<n;i++){
                cin>>a;
                v.pb(a);
                sum+=a;
         }
 
         bool f=check(n,sum,v);
         reverse(all(v));
         bool f2=check(n,sum,v);
 
         if(f==true || f2==true)cout<<"NO"<<endl;
         else cout<<"YES"<<endl;
 
 
}
 
int main(){
    ios_base::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
return 0;
}
 
