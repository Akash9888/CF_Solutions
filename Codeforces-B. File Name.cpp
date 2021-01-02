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
    int t,cnt=0,total=0;
    cin>>t;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
       if(s[i]=='x')cnt++;
       else{
        if(cnt>2)total+=cnt-2;
        cnt=0;
       }
    }
    if(cnt>2)total+=cnt-2;
 
    cout<<total<<endl;
 
return 0;
}
 
 
