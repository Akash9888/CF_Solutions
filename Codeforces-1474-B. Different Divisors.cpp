
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

ll limit =1000000;
vector<bool>primes;
vi v;

void sieve(){
    primes.resize(limit+1,true);
    for(int i=2;i*i<=limit;i++){
        if(primes[i]==true){
            for(int j=i*i;j<=limit;j+=i){
                primes[j]=false;
            }
        }
    }

    for(int i=2;i<primes.size();i++){
        if(primes[i])v.pb(i);
    }

}


void solve(){
    ll ans=1,temp=1,d,cnt=0;cin>>d;

    for(int  i=0;i<v.size();i++){
        if(v[i]-temp>=d){ans*=v[i];cnt++;temp=v[i];}
        if(cnt==2){
            cout<<ans<<endl;
            break;
        }
    }


}

int main(){
    ios_base::sync_with_stdio(0);
    sieve();
    int t;cin>>t;while(t--){solve();}
return 0;
}
