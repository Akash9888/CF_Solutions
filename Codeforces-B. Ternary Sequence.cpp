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
        ll sum=0;
        vll a(3),b(3);
        for(int i=0;i<3;i++) cin>>a[i];
        for(int i=0;i<3;i++) cin>>b[i];
 
        for(int i=2;i>=1;i--){
            if(a[i]<=b[i-1]){
                b[i-1]-=a[i];
                if(i==2) sum+=a[i]*2;
                a[i]=0;
            }
            else if(a[i]>b[i-1]){
                a[i]-=b[i-1];
                if(i==2) sum+=b[i-1]*2;
                b[i-1]=0;
            }
        }
 
        for(int i=0;i<b.size();i++){
            if(i==2)sum-=a[1]*2;
            else a[1]-=b[i];
 
            if(a[1]<=0)break;
        }
 
 
 
        cout<<sum<<endl;
    }
 
 
return 0;
}
 
 
