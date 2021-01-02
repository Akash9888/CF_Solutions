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
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(0);
    int t=1;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(n==k)cout<<0<<endl;
        else if(n<k)cout<<k-n<<endl;
        else if (n>k){
            if((n%2==0) && (k%2==0))cout<<0<<endl;
            else if((n%2==1) && (k%2==1))cout<<0<<endl;
            else cout<<1<<endl;
        }
    }
 
 
return 0;
}
 
 
