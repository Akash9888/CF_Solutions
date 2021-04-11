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
    int n,c=0,r1=0,r2=0,c1=0,c2=0;
    cin>>n;
    vector<vector<char>>v;

    for(int i=0;i<n;i++){
        vector<char>vec;
        for(int j=0;j<n;j++){
            char a;
            cin>>a;
            vec.pb(a);
            if(a=='*' && c==0){
                r1=i;
                c1=j;
                c++;

            }
            else if(a=='*' && c>0){

                r2=i;
                c2=j;
            }
        }

       v.pb(vec);
    }




    if(r1==r2){
        if(r1!=(n-1)){
            v[r1+1][c1]='*';
            v[r1+1][c2]='*';
        }
        else{
            v[r1-1][c1]='*';
            v[r1-1][c2]='*';
        }
    }
    else if(c1==c2){
        if(c1!=(n-1)){
            v[r1][c1+1]='*';
            v[r2][c2+1]='*';
        }
        else{
           v[r1][c1-1]='*';
           v[r2][c1-1]='*';
        }
    }
    else{
        v[r1][c2]='*';
        v[r2][c1]='*';
    }



      for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j];
        }
        cout<<endl;
    }

}

int main(){
    ios_base::sync_with_stdio(0);
    int t; cin>>t;
    while(t--) solve();
return 0;
}
