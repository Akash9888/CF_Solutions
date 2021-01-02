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
        int n;
        cin>>n;
        vi v,u;
        while(n--){
            int a;
            cin>>a;
            v.pb(a);
        }
 
            int cnt=0;
            sort(all(v),greater<int>());
            for(int i=0;i<v.size()-1;i++){
                if(abs(v[i]-v[i+1])<=1)cnt++;
            }
            if((v.size()-cnt)==1)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
            //cout<<cnt<<endl;
 
 
 
 
    }
 
 
return 0;
}
 
