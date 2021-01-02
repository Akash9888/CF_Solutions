 
/*
    Author Name: Akash Chanda Tushar(CSE,LU)
*/
#include<bits/stdc++.h>
#define   ll            long long int
#define   ull           unsigned long long
#define   endl          "\n"
#define   vi            vector<int>
#define   vll           vector<ll>
#define   vpi           vector<pair<int,int>>
#define   vpll          vector<pair<ll,ll>>
#define   pb            push_back
#define   eb            emplace_back
#define   all(p)        p.begin(),p.end()
#define   F             first
#define   S             second
#define   mp            make_pair
#define   MOD           1000000007
using namespace std;
 
void solve(){
        int n,x,y,cnt=0;
        cin>>n;
        vi adj[1000+1];
        set<int>s;
 
        for(int i=0;i<n;i++){
                cin>>x>>y;
                adj[x].pb(y);
                s.insert(x);
        }
 
        string p="";
        x=0,y=0;
        bool f=true;
        for(auto it=s.begin();it!=s.end();it++){
                int temp2=*it-x;
                x=*it;
                for(int i=0;i<temp2;i++)p+='R';
                int mx=0,cur=0,temp=0;
                for (auto xx : adj[*it]){
                     if(xx>=y) {temp=xx-y;}
                     else {f=0;break;}
                     if(temp>=mx){
                        mx=temp;
                     }
                     if(cur<xx)cur=xx;
 
                }
                if(!f) break;
                y=cur;
                for(int i=0;i<mx;i++)p+='U';
 
 
        }
        if(f){
                cout<<"YES"<<endl;
                cout<<p<<endl;
        }
        else cout<<"NO"<<endl;
 
}
 
int main(){
    ios_base::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
return 0;
}
