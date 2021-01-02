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
    vi v;
    while(t--){
        int a;
        cin>>a;
        v.pb(a);
    }
    map<int,int>mp;
    set<int>s;
    for(int i=v.size()-1;i>=0;i--) mp.insert(make_pair(v[i],i));
 
    for(auto it=mp.begin();it!=mp.end();it++) s.insert(it->S);
 
    cout<<s.size()<<endl;
 
    for(auto it2=s.begin();it2!=s.end();it2++)cout<<v[*it2]<<" ";
    cout<<endl;
 
return 0;
}
 
