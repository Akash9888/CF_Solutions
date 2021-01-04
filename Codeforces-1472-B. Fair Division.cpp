
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
        int n,a,zz=0,oo=0;
        cin>>n;
       // vi v;

        for(int i=0;i<n;i++){
                cin>>a;
                if(a==1)oo++;
                else zz++;
        }
        if(zz%2==0 && oo%2==0)cout<<"YES"<<endl;
        else if(zz%2==1){
                        if(oo>=2){
                        oo-=2;
                        if(oo%2==0)cout<<"YES"<<endl;
                        else cout<<"NO"<<endl;
                        }
                        else cout<<"NO"<<endl;


        }
        else if(zz%2==0 && oo%2==1)cout<<"NO"<<endl;
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



