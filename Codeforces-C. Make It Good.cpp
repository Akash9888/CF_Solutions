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
    int t;
    cin>>t;
    while(t--){
        int n,a,ans=1,i;
        cin>>n;
        vi v;
        for(int i=0;i<n;i++){cin>>a;v.pb(a);}
 
        for(i=v.size()-2;i>=0;i--){
            if(v[i]>=v[i+1])ans++;
            else break;
        }
        for( ;i>=0;i--){
            if(v[i]<=v[i+1])ans++;
            else break;
        }
        cout<<n-ans<<endl;
 
    }
 
 
return 0;
}
 
