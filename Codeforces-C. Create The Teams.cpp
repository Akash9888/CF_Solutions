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
    int t=1;
    cin>>t;
    while(t--){
        ll n,x,a;
        int team=0,cnt=1;
        cin>>n>>x;
        vll v;
        while(n--){
            cin>>a;
            v.pb(a);
        }
        sort(all(v),greater<int>());
 
        for(int i=0;i<v.size();i++){
           if(v[i]*cnt>=x){team++;cnt=1;}
           else cnt++;
 
      }
 
 
 
    cout<<team<<endl;
    }
 
 
return 0;
}
 
 
