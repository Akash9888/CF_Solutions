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
 
        int n,m;
        cin>>n>>m;
        vll a,b;
        while(n--){
            ll x;
            cin>>x;
            a.pb(x);
        }
        while(m--){
            ll x;
            cin>>x;
            b.pb(x);
        }
 
        int j=0;
        ll x=a[j],y=0;
 
        for(int i=0;i<b.size(); ){
            
           if(b[i]<=x){
             cout<<j+1<<" "<<b[i]-y<<endl;
             i++;
           }
           else if(b[i]>x){
             y+=a[j];
             x+=a[j+1];
             j++;
           }
 
        }
 
return 0;
}
 
 
