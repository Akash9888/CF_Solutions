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
 
 
bool check(ull n){
        ull y=n,x;
        bool f=false;
        while(y>0){
                x=y%10;
                y=y/10;
                if(x!=0){
                     if(n%x==0)f=true;
                     else {f=false;break;}
                }
        }
        return f;
}
 
void solve(){
       ull n;
       cin>>n;
 
       for(ull i=n; ;i++ ){
          bool f=check(i);
          if(f){cout<<i<<endl;break;}
 
 
       }
 
}
 
 
int main(){
    ios_base::sync_with_stdio(0);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
return 0;
}
 
 
 
