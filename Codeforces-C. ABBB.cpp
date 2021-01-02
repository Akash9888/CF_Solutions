 
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
 
        ll cnt=s.size(),b=0;
 
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='B')b++;
            else if(s[i]=='A'){
                if(b>0){
                    b--;
                    cnt-=2;
                }
            }
        }
        if(b%2==0)cnt-=b;
        else {
            cnt-=b;
            cnt++;
        }
        cout<<cnt<<endl;
 
    }
 
return 0;
}
 
