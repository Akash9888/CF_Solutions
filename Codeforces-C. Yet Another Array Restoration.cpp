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
        int n,x,y,z,cur=1,cur2;
        cin>>n>>x>>y;
 
         while(1){
            z=x;
            int cnt=1;
            bool f;
            while(1){
                z+=cur;
                cnt++;
                if(z==y){f=true;break;}
                else if(z>y){f=false;break;}
            }
 
            if(cnt<=n && f==true){cur2=cnt;break;}
            else cur++;
 
         }
         z=x;
         cout<<z<<" ";
         cur2--;
         n--;
         while(cur2--){
            z+=cur;
            cout<<z<<" ";
            n--;
         }
         while(n>0 && (x-cur)>=1){
            cout<<x-cur<<" ";
            n--;
            x-=cur;
 
         }
         while(n>0){
            cout<<y+cur<<" ";
            n--;
            y+=cur;
         }
         cout<<endl;
 
    }
 
 
return 0;
}
 
 
 
