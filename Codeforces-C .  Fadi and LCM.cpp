 
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
 
ll gcd(ll a, ll b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
 
ll lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}
 
 
void solve(){
        ll x;
        cin>>x;
 
        for(ll i=sqrt(x);i>=1;i--){
                if(x%i==0){
                        ll check=lcm(i,x/i);
                        if(x==check){
                                cout<<i<<" "<<x/i<<endl;
                                break;
                        }
                }
        }
}
 
int main(){
    ios_base::sync_with_stdio(0);
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
return 0;
}
