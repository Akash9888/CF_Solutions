
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
        ll n,b;
        cin>>n;
        set<int>s;
        for(int i=0;i<n;i++){
            cin>>b;
            s.insert(b);
        }
        if(s.size()==n)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
 
    }
 
return 0;
}
 
