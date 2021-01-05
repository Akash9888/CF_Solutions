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
        ll n,x,xx,a,sum=0,sum2=0;
        cin>>n>>x;
 
        for(int i=0;i<n;i++){
                cin>>a;
                sum+=a;
                if(a%x==0){
                        sum2+=a/x;
 
                }
                else sum2+=(a/x)+1;
 
        }
        if(sum%x==0)xx=sum/x;
        else xx=sum/x + 1;
 
 
        cout<<min(sum2,xx)<<" "<<max(xx,sum2)<<endl;
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
 
 
