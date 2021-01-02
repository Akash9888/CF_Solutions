
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
        ll n,k;
        cin>>n>>k;
 
        if(k>n)cout<<"NO"<<endl;
 
        else if(k==n){
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++)cout<<1<<" ";
            cout<<endl;
        }
 
        else if((n%2==0) && (k%2==0)){
            cout<<"YES"<<endl;
            for(int i=1;i<k;i++) cout<<1<<" ";
            cout<<n-(k-1)<<endl;
        }
        else  if((n%2==0) && (k%2==1)){
            if(k*2<=n){
                cout<<"YES"<<endl;
                for(int i=1;i<k;i++)cout<<2<<" ";
                cout<<n-((k-1)*2)<<endl;
            }
            else cout<<"NO"<<endl;
        }
 
        else if((k%2==1)&&(n%2==1)){
 
                cout<<"YES"<<endl;
                for(int i=1;i<k;i++)cout<<1<<" ";
                cout<<n-(k-1)<<endl;
 
        }
        else if((n%2==1) && (k%2==0)) cout<<"NO"<<endl;
 
 
 
 
    }
 
return 0;
}
