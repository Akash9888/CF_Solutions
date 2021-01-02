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
        int n;
        cin>>n;
        vi v(105,-1);
        vi s1,s2;
        for(int i=0;i<n;i++){
           int a;
           cin>>a;
           v[a]++;
        }
        for(int i=0;i<v.size();i++){
            if(v[i]>=1){
               s1.pb(i);
               s2.pb(i);
            }
            else if(v[i]==0)s1.pb(i);
        }
       // for(int i=0;i<s1.size();i++)cout<<s1[i]<<" ";
       // cout<<endl;
       // for(int i=0;i<s2.size();i++)cout<<s2[i]<<" ";
        //cout<<endl;
 
        int x=0,y=0;
 
       for(int i=0; ;i++){
            bool f=false;
            for(int  j=0; j<s1.size();j++){
                if(s1[j]== i){
                    f=true;
                    break;
                }
            }
            if(f==false){
                x=i;
                break;
            }
        }
 
 
        for(int i=0; ;i++){
            bool f=false;
            for(int  j=0; j<s2.size();j++){
                if(s2[j]== i){
                    f=true;
                    break;
                }
            }
            if(f==false){
                y=i;
                break;
            }
        }
       // cout<<"x="<<x<<endl;
       // cout<<"Y="<<y<<endl;
        cout<<x+y<<endl;
 
    }
 
 
 
return 0;
}
 
