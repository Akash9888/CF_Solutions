 
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
 
int main(){
    ios_base::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--){
       ll  x,y,t=9,cnt=0;
       cin>>x;
       y=x;
       vll v;
 
       while(1){
         if(y>=t){
            y-=t;
            cnt+=t;
            v.pb(t);
            t--;
         }
         else t--;
         if(t==0){
            if(cnt==x){
                sort(all(v));
                for(int i=0;i<v.size();i++)cout<<v[i];
                cout<<endl;
                break;
            }
            else{cout<<-1<<endl;break;}
         }
       }
 
 
 
 
    }
 
return 0;
}
