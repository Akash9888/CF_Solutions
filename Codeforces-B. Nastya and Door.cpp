/*
    Author Name: Akash Chanda Tushar(CSE,LU)
*/
#include<bits/stdc++.h>
#define   ll            long long int
#define   ull           unsigned long long
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
    ll t;
    cin>>t;
    while(t--){
        ll n,k,a;
        cin>>n>>k;
 
        vll v;
 
        for(int i=0;i<n;i++){
            cin>>a;
            v.pb(a);
        }
 
        int cnt=0,mx=0,index=0,x=0,y=k-1;
 
        for(int i=1;i<k-1;i++){
            if((v[i]>v[i-1])&& (v[i]>v[i+1])){
                cnt++;
            }
        }
        if(cnt>0){
            mx=cnt;
            index=x;
        }
        x++;
 
 
        for(int i=y;i<v.size()-1;i++){
            if((v[x]>v[x-1])&& (v[x]>v[x+1])){
                if(cnt>0)cnt--;
            }
            if((v[i-1]<v[i]) && (v[i+1]<v[i])){
                cnt++;
            }
            if(cnt>mx){
                mx=cnt;
                index=x;
                //x++;
            }
            x++;
 
        }
        cout<<mx+1<<" "<<index+1<<endl;
 
    }
 
return 0;
}
 
