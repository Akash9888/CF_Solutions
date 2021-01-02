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
set<int>s;
ll n;
 
void check(){
          for(int i=2;i<=sqrt(n);i++){
                if(n%i==0 && !s.count(i)){
                        s.insert(i);
                        n/=i;
                        break;
                }
         }
}
 
void solve(){
 
        cin>>n;
        check();
        check();
 
        if(s.size()<2 || s.count(n) || n==1){cout<<"NO"<<endl;s.clear();}
        else {
                s.insert(n);
                cout<<"YES"<<endl;
 
                for(auto it=s.begin();it!=s.end();it++)cout<<*it<<" ";
                cout<<endl;
 
                s.clear();
        }
 
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
 
