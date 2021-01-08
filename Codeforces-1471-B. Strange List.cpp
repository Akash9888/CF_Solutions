 
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
        ll n,a,sum=0,x;
        cin>>n>>x;
 
        vpll v;
        bool f=false;
 
        for(int i=0;i<n;i++){
                cin>>a;
                sum+=a;
                if(a%x==0  && f==false){
                        sum+=a;
                        v.pb(mp((a/x),x));
                }
                else f=true;
        }
        while(!f){
                ll temp=v.size()-1;
                for(int i=0;i<v.size();i++){
 
 
                      if((v[i].F)%x==0){
                        sum+=(v[i].F)*(v[i].S);
                         v.pb(mp((v[i].F)/x,(v[i].S)*x));
 
 
                      }
 
                        else {f=true;break;}
                }
                if(!f) v.erase(v.begin()+temp);
 
        }
        cout<<sum<<endl;
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
 
