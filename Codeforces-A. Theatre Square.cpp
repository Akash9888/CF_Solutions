#include<bits/stdc++.h>
#define   ll            long long int
#define   endl          "\n"
#define   vi            vector<int>
#define   vll           vector<ll>
#define   pb            push_back
#define   all(p)        p.begin(),p.end()
#define   F             first
#define   S             second
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(0);
 
        ll n,m,a;
        cin>>n>>m>>a;
        
        if(n%a==0) n=n/a;
        else n=(n/a)+1;
        
        if(m%a==0) m=m/a;
        else m=(m/a)+1;
 
        cout<<n*m<<endl;
 
 
return 0;
}
 
 
