
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
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
ll lcm(ll a, ll b){return (a / gcd(a, b)) * b;}


void solve(){
        ll a,n;
        cin>>n;
        vector<pair<ll,ll>>v;
        vll u(n,0);


        for(int i=0;i<n;i++){
                cin>>a;
                v.pb(mp(a,(a+i)));
        }
        for(int i=n-1;i>=0;i--){
                ll x=v[i].F;
                if(v[i].S<n)x+=u[v[i].S];
                //cout<<i<<" "<<x<<endl;
                u[i]=x;
        }
        cout<<*max_element(all(u))<<endl;



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

