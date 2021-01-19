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
    int n;
    cin>>n;
    string s;
    cin>>s;
    vi v,x;
    for(int i=0;i<n;i++){
        if(s[i]=='0')v.pb(0);
        else v.pb(1);
    }
    int temp=v[0]+1;
    x.pb(1);
    for(int i=1;i<v.size();i++){
        if(v[i]+1 !=temp){
            x.pb(1);
            temp=v[i]+1;
        }
        else {
            x.pb(0);
            temp=v[i];
        }
 
    }
    for(int i=0;i<x.size();i++)cout<<x[i];
    cout<<endl;
 
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
