 
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
        int n,c0,c1,h,cnt=0,zero=0,one=0;
        cin>>n>>c0>>c1>>h;
        string s;
        cin>>s;
 
        for(int i=0;i<n;i++){
                if(s[i]=='0')zero++;
                else one++;
        }
 
        if(c0<=c1){
           cnt+=  zero*c0;
           cnt+=min((c1*one),((h*one)+(one*c0)));
        }
        else{
           cnt+=  one*c1;
           cnt+=min((c0*zero),((h*zero)+(zero*c1)));
        }
        cout<<cnt<<endl;
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
 
