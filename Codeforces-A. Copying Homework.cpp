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
    int t=1;
    //cin>>t;
    while(t--){
        int n,a,x=2;
        cin>>n;
        map<int,int>m;
 
        for(int i=1;i<=n;i++){
            cin>>a;
            if(a==1)m.insert(make_pair(i,n));
            else if(a==n)m.insert(make_pair(i,1));
            else {
                m.insert(make_pair(i,x));
                x++;
            }
 
        }
        for(auto it=m.begin();it!=m.end();it++) cout<<it->S<<" ";
        cout<<endl;
 
    }
 
 
return 0;
}
 
