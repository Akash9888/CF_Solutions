#include<bits/stdc++.h>
#define   ll            long long int
#define   endl          "\n"
#define   vi            vector<int>
#define   vll           vector<ll>
#define   pb            push_back
#define   all(p)        p.begin(),p.end()
#define   F             first
#define   S             second
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--){
        ll n,  div=1;
        cin>>n;
        for(ll i=2;i*i<=n;i++){
          if(n%i==0)div=max(div,max(i,n/i));
        }
        cout<<div<<" "<<n-div<<endl;
    }
 
 
return 0;
}
 
 
