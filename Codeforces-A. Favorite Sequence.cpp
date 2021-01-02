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
 
int main(){
    ios_base::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--){
        ll a,n;
        cin>>n;
        vll v;
        for(int i=0;i<n;i++){
            cin>>a;
            v.pb(a);
        }
        ll i=1,j=0,k=n-1;
       while(n--){
         if(i%2==1){cout<<v[j]<<" ";i++;j++;}
         else{
            cout<<v[k]<<" ";k--;i++;
         }
 
 
       }
       cout<<endl;
 
 
 
    }
 
return 0;
}
 
