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
            string str;
            cin>>str;
            int cnt=0;
            cnt+=(str.size()*(str.size()+1))/2;
            char c = str[0];
            int x=c-'0';
            cnt+=(x-1)*10;
            cout<<cnt<<endl;
 
 
    }
 
return 0;
}
 
