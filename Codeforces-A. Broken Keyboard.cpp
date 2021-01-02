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
        string str;
        cin>>str;
        set<char>s;
        for(int i=0;i<str.size(); ){
            if(str[i]!=str[i+1]){s.insert(str[i]);i++;}
            else i=i+2;
        }
 
 
        for(auto it=s.begin();it!=s.end();it++)cout<<*it;
        cout<<endl;
    }
 
 
return 0;
}
 
