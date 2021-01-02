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
 
void solve(){
        ll n,a,even=0,odd=0;
        cin>>n;
        vll v;
        for(int i=0;i<n;i++){
                cin>>a;
                v.pb(a);
                if(i%2==0)even+=a;
                else odd+=a;
        }
        if(even<=odd){
                for(int i=0;i<n;i++){
                        if(i%2==0)cout<<1<<" ";
                        else cout<<v[i]<<" ";
                }
 
        }
        else{
                for(int i=0;i<n;i++){
                        if(i%2==1)cout<<1<<" ";
                        else cout<<v[i]<<" ";
                }
 
        }
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
 
