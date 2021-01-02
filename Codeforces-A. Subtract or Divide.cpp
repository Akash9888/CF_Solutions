 
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
        ll n;
        cin>>n;
 
 
        if(n==1)cout<<0<<endl;
        else if(n==2)cout<<1<<endl;
        else if(n==3 || (n%2==0))cout<<2<<endl;
        else if(n%2==1)cout<<3<<endl;
 
    }
 
return 0;
}
 
 
