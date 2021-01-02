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
#define   MOD           1000000007
using namespace std;
 
 
int main(){
    ios_base::sync_with_stdio(0);
    ll n,a,cnt=0;
    vll v,u;
    cin>>n;
    for(int i=0;i<n;i++){
       cin>>a;
       v.pb(a);
    }
    int x=0,y=n-1;
    sort(all(v),greater<int>());
 
    for(int i=0;i<n;i++){
        if(i%2==0){
           u.pb(v[x]);
           x++;
        }
        else{
            u.pb(v[y]);
            //if((v[y]<v[i-1])&&(v[y]<v[i+1]))cnt++;
             if((v[y]<u[i-1])&&(v[y]<v[x]))cnt++;
            y--;
        }
    }
    cout<<cnt<<endl;
    for(int i=0;i<u.size();i++)cout<<u[i]<<" ";
    cout<<endl;
 
 
 
}
