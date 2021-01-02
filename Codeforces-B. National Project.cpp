
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
        ll n,g,b,x,y,z;
        ull cnt=0;
        cin>>n>>g>>b;
        if(n%2==0){x=n/2;y=n-x;}
        else {x=n/2+1; y=n-x;}
 
        if(x<=g){
             cnt+=x;
             z=(g-x)+b;
             if(z>=y)cnt+=y;
             else{
                cnt+=z;
                cnt+=y-z;
             }
 
         }
         else{
                ll temp,w;
                if(x%g==0)temp=x/g;
                else temp=x/g+1;
 
                z=(temp-1)*b;
                cnt+=x;
                if(z>=y)cnt+=z;
                else {
                        cnt+=z;
                        cnt+=y-z;
                }
         }
 
        cout<<cnt<<endl;
 
 
 
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
 
