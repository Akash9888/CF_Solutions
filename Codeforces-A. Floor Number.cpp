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
        int n,x;
        cin>>n>>x;
        if(n<=2)cout<<1<<endl;
        else{
            int l=3,r=2;
            int cnt=1;
            while(1){
                r+=x;
                cnt++;
                if(n>=l && n<=r){
                    cout<<cnt<<endl;
                    break;
                }
                l=r+1;
            }
        }
 
    }
 
return 0;
}
 
 
 
