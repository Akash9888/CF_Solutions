 
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
 
int main(){
    ios_base::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--){
        int n,k;
       cin>>n>>k;
       for(int i=1;i<=k;i++)cout<<'c';
       int c=0;
       for(int i=k+1;i<=n;i++){
        if(c==0)cout<<'a';
        else if(c==1)cout<<'b';
        else if(c==2)cout<<'c';
 
        c++;
        if(c==3)c=0;
       }
       cout<<endl;
 
    }
 
return 0;
}
 
