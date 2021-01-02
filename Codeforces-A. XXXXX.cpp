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
    int t;
    cin>>t;
    while(t--){
       int n,x,a,div=0;
       cin>>n>>x;
       ll sum=0;
       vi v;
       for(int i=0;i<n;i++){
           int a;
           cin>>a;
           v.pb(a);
           sum+=a;
           if(a%x==0)div++;
       }
 
       if(div==n)cout<<-1<<endl;
       else if(sum % x != 0)cout<<n<<endl;
       else{
            ll temp=sum;
            int len=n,len2=n;
            for(int i=0;i<v.size();i++){
                sum-=v[i];
                len--;
                if(sum % x != 0)break;
            }
            for(int i=v.size()-1;i>=0;i--){
                temp-=v[i];
                len2--;
                if(temp % x != 0 )break;
            }
 
            cout<<max(len,len2)<<endl;
       }
 
    }
 
 
return 0;
}
 
 
 
