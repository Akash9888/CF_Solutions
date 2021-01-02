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
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
ll lcm(ll a, ll b){return (a / gcd(a, b)) * b;}
 
 
int check(vector<char>v,char ch){
        int index=0;
        for(int i=0;i<v.size();i++){
                if(v[i]==ch){
                        index=i;
                        break;
                }
        }
        return index;
}
 
 
void solve(){
        string s;
        cin>>s;
        vector<char>v;
 
        bool f=true;
 
        for(int i=0;i<s.size()-1;i++){
                if(!count(all(v),s[i])){
                        v.pb(s[i]);
                }
                else{
                        int id=check(v,s[i]);
                        if((v.size()>(id+1)) && (s[i+1]==v[id+1])) continue;
                        else if(id>0 && (s[i+1]==v[id-1]))continue;
                        else{
                                if(!count(all(v),s[i+1])){
                                        if(id==0){
                                          auto it = v.insert(v.begin() + id, s[i+1]);
                                        }
                                        else if(id==v.size()-1) v.pb(s[i+1]);
                                        else {f=false;break;}
 
 
                                }
                                else {f=false;break;}
                        }
                }
                if(!count(all(v),s[i+1])){
                        v.pb(s[i+1]);
                }
                else{
                        int id=check(v,s[i+1]);
                        if((v.size()>(id+1)) && (s[i]==v[id+1])) continue;
                        else if(id>0 && (s[i]==v[id-1]))continue;
 
                        else {f=false;break;}
 
                }
 
        }
 
        vector<bool>b(123);
        if(f){
                cout<<"YES"<<endl;
                for(int i=0;i<v.size();i++){
                    cout<<v[i];
                    b[int(v[i])]=1;
                }
                for(int i=97;i<b.size();i++){
                        if(!b[i])cout<<char(i);
                }
                cout<<endl;
 
        }
        else cout<<"NO"<<endl;
}
 
int main(){
    ios_base::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
return 0;
}
 
 
