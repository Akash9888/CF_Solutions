
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
       int n,m; cin>>n>>m;
       vi v,u,k;
       v.pb(0);
       u.pb(0);

       for(int i=0;i<n;i++){int a;cin>>a;v.pb(a);u.pb(a);}
       for(int i=0;i<m;i++){int a;cin>>a;k.pb(a);}

       sort(all(u));

       bool f=true;

       for(int i=1;i<u.size();i++){
         for(int j=1;j<v.size();j++){
                if(u[i]==v[j]){
                        for(int x=j;x>i;x--){
                                if(!count(all(k),x-1)){f=false;break;}
                                else swap(v[x],v[x-1]);
                        }
                        v[i]=-1;

                        break;
                }

                if(!f)break;
         }
         if(!f)break;

       }

       //for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
       //cout<<endl;


       if(f)cout<<"YES"<<endl;
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



