
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
    int n,temp,cnt=0,index=-1;
    cin>>n;
    vi v;


    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.pb(a);
        if(i==0)temp=a;
        if(i>0 && cnt==0){
            if(a<temp){index=i;cnt++;}
            else temp=a;
        }
    }

    if(index==-1)cout<<0<<endl;
    else{
        vi vv;
        for(int i=index;i<v.size();i++) vv.pb(v[i]);
        for(int i=0;i<index;i++)vv.pb(v[i]);

        //for(int i=0;i<vv.size();i++)cout<<vv[i]<<" ";
       // cout<<endl;

        if(is_sorted(all(vv))){
            cout<<n-index<<endl;
        }
        else cout<<-1<<endl;


    }


}

int main(){
    ios_base::sync_with_stdio(0);
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
return 0;
}
