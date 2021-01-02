 
/*
    Akash Chanda Tushar(CSE,LU)
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
    int t=1;
    //cin>>t;
    while(t--){
        ull n,fact=1;
        cin>>n;
        for(ull i=1;i<=n;i++)fact*=i;
        fact/=n;
        fact=(fact*2)/n;
        cout<<fact<<endl;
    }
 
return 0;
}
 
 
