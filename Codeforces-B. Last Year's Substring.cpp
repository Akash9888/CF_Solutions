
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
 
void solve(){
        int n;
        cin>>n;
        string s;
        cin>>s;
 
        if(s.substr(0,4)=="2020")cout<<"YES"<<endl;
        else if(s.substr(n-4,4)=="2020")cout<<"YES"<<endl;
        else if((s.substr(0,3)=="202") && (s.substr(n-1,1)=="0"))cout<<"YES"<<endl;
        else if((s.substr(0,2)=="20") && (s.substr(n-2,2)=="20"))cout<<"YES"<<endl;
        else if((s.substr(0,1)=="2") && (s.substr(n-3,3)=="020"))cout<<"YES"<<endl;
 
        else cout<<"NO"<<endl;
}
 
int main(){
    ios_base::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
return 0;
}
 
