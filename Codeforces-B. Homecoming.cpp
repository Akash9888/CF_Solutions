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
 
ll a,b,p,sum=0;
vector<pair<int,int>>v;
 
 
void fill_(char  ch , int index){
        if(ch=='A'){v.pb(mp(index+1,a));sum+=a;}
        else {v.pb(mp(index+1,b));sum+=b;}
}
 
 
void solve(){
 
        cin>>a>>b>>p;
        string s; cin>>s;
 
         v.clear();
         sum=0;
 
        v.pb(mp(1,0));
 
 
        int index=1;
        for(int i=0;i<s.size()-1;i++){
                if(s[i]==s[i+1]){
 
                        if(i==(s.size()-2)) fill_(s[i],i+1);
                }
                else {
                        index=i+1;
                        fill_(s[i],index);
                }
        }
 
        for(int i=0;i<v.size();i++){
                sum-=v[i].S;
                if(sum<=p){
                        cout<<v[i].F<<endl;
                        break;
                }
        }
 
 
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
