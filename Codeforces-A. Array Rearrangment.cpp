#include<bits/stdc++.h>
#define   ll            long long int
#define   endl          "\n"
#define   vi            vector<int>
#define   vll           vector<ll>
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
 
      int  n,x;
      cin>>n>>x;
      vi v,v2;
      for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.pb(a);
      }
       for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v2.pb(a);
      }
      sort(all(v));
      sort(all(v),greater<int>());
 
      bool f=true;
 
      for(int i=0;i<n;i++){
        if(v[i]+v2[i]>x){f=false;break;}
      }
      if(f)cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
     // cout<<endl;
 
 
    }
 
return 0;
}
 
 
