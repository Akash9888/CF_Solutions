 
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
    int t;
    cin>>t;
    while(t--){
        ll x,y,a,b,cnt=0;
        cin>>x>>y>>a>>b;
 
        if(x==a)cout<<abs(y-b)<<endl;
        else if(y==b)cout<<abs(x-a)<<endl;
        else{
                cnt+=abs(x-a)+abs(y-b)+2;
                cout<<cnt<<endl;
 
        }
    }
 
return 0;
}
 
