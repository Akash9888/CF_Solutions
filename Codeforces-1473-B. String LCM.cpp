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
    string a,b,s="",s2="";
    cin>>a>>b;
 
    ll x=lcm(a.size(),b.size());
 
    for(int i=1;i<=(x/a.size());i++)s+=a;
    for(int i=1;i<=(x/b.size());i++)s2+=b;
 
    //cout<<s<<" "<<s2<<endl;
 
    if(s2==s)cout<<s<<endl;
    else cout<<-1<<endl;
 
 
 
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
