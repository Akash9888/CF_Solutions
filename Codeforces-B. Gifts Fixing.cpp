
#include<bits/stdc++.h>
#define   ll            long long int
#define   endl          "\n"
#define   vi            vector<int>
#define   vll           vector<ll>
#define   pb            push_back
#define   all(p)        p.begin(),p.end()
#define   F             first
#define   S             second
#define   mp            make_pair
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        ll x,y,cnt=0;
        cin>>n;
        vll v,v2;
        for(int i=0;i<n;i++){
            ll a;
            cin>>a;
            v.pb(a);
        }
        for(int i=0;i<n;i++){
            ll a;
            cin>>a;
            v2.pb(a);
        }
         x=*min_element(all(v));
         y=*min_element(all(v2));
        //cout<<x<<" "<<y<<endl;
 
        for(int i=0;i<n;i++){
          ll a=abs(v[i]-x);
          ll b=abs(v2[i]-y);
          if(a>b)swap(a,b);
          //cout<<"a="<<a<<" "<<"b="<<b<<endl;
          cnt+=a;
          cnt+=b-a;
 
        }
        cout<<cnt<<endl;
 
    }
 
 
return 0;
}
 
 
