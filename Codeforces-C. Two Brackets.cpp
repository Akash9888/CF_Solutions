 
/*
    Author Name: Akash Chanda Tushar(CSE,LU)
*/
#include<bits/stdc++.h>
#define   ll            long long int
#define   ull           unsigned long long
#define   endl          "\n"
#define   vi            vector<int>
#define   vll           vector<ll>
#define   pb            push_back
#define   eb            emplace_back
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
        string s;
        cin>>s;
 
         int x=0,y=0,cnt=0;
 
        for(int i=0;i<s.size();i++){
           if(s[i]=='(') x++;
           else if(s[i]==')'){
                if(x!=0){
                    cnt++;
                    x--;
                }
           }
           else if(s[i]=='[') y++;
           else if(s[i]==']'){
                if(y!=0){
                    cnt++;
                    y--;
                }
           }
 
        }
 
 
 
        cout<<cnt<<endl;
 
    }
 
return 0;
}
 
 
