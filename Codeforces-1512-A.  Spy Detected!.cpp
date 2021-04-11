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
    int n,a;
    cin>>n;
    vpi v;
    for(int i=0;i<n;i++){
        cin>>a;
        v.pb(mp(a,i));
    }
    sort(all(v));

    if((v[0].F != v[1].F) && (v[1].F == v[2].F)){
        cout<<v[0].S +1<<endl;
    }
    else{
       cout<<v[n-1].S+1<<endl;
    }



}

int main(){
    ios_base::sync_with_stdio(0);
    int t; cin>>t;
    while(t--) solve();
return 0;
}
 
