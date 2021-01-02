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
        int n,m;
        cin>>n>>m;
        vi a(n),b(m);
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<m;i++)cin>>b[i];
        sort(all(a));
        sort(all(b));
        int temp=0,temp2;
        for(int i=0;i<a.size();i++){
            if(binary_search(b.begin(),b.end(),a[i])){
                temp++;
                temp2=a[i];
                break;
 
            }
        }
        if(temp!=0){
            cout<<"YES"<<endl;
            cout<<temp<<" "<<temp2<<endl;
        }
        else cout<<"NO"<<endl;
 
 
    }
 
 
return 0;
}
