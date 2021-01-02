 
 
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
        int n;
        cin>>n;
        if(n%2==0){
            for(int i=n;i>=1;i--)cout<<i<<" ";
            cout<<endl;
        }
        else{
            int x=n/2;
            x++;
            for(int i=n;i>=1;i--){
                if(i!=x)cout<<i<<" ";
            }
            cout<<x<<endl;
        }
    }
 
return 0;
}
 
