#include<bits/stdc++.h>
#define   ll            long long int
#define   endl          "\n"
#define   vi            vector<int>
#define   vll           vector<ll>
#define   pb            push_back
#define   all(p)        p.begin(),p.end()
#define   F             first
#define   S             second
#define   mp            make_pair
#define   MOD           1000000007
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--){
        ll a,b,cnt=0;;
        cin>>a>>b;
        //if(a==b)cout<<0<<endl;
 
            if(a>b)swap(a,b);
            ll x=b-a;
            cnt+=x/10;
            x-=cnt*10;
            if(x>0)cnt++;
 
        cout<<cnt<<endl;
    }
 
 
return 0;
}
