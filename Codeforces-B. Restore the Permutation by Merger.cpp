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
        int n;
        cin>>n;
        n*=2;
        vi v;
        map<int,int>m;
        set<int>s;
        while(n--){
            int a;
            cin>>a;
            v.pb(a);
        }
        for(int i=v.size()-1;i>=0;i--){
            m.insert(make_pair(v[i],i));
        }
        for(auto it=m.begin();it!=m.end();it++)s.insert(it->S);
        for(auto it=s.begin();it!=s.end();it++)cout<<v[*it]<<" ";
        cout<<endl;
 
    }
 
 
return 0;
}
 
 
