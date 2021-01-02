 
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
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
ll lcm(ll a, ll b){return (a / gcd(a, b)) * b;}
 
 
void solve(){
        int n; cin>>n;
        vi ans,vv,v;
 
        vector<bool>b((2*n)+1);
 
        for(int i=1;i<=n;i++){
                int a;
                cin>>a;
                v.pb(a);
                b[a]=true;
        }
 
 
         for(int i=1;i<b.size();i++){
                if(!b[i])vv.pb(i);
         }
 
         bool f=true;
 
        for(int i=0;i<v.size();i++){
 
                auto it= upper_bound(all(vv),v[i]);
                if(it==vv.end()){
                        f=false ;
                        break;
                }
                else{
                    int x=distance(vv.begin(),it);
                    ans.pb(v[i]);
                    ans.pb(vv[x]);
                    vv.erase(vv.begin()+x);
                }
 
        }
        if(f){
                for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
                cout<<endl;
        }
        else cout<<-1<<endl;
 
 
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
