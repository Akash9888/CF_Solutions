
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
 
bool fun_1(int l,int  r,int zero,int one,string&s){
 
            for(int i=0;i<=r;i++){
                if(s[i]=='0')zero--;
                else one--;
            }
            if(s[r]=='0'){
                if(zero>0) return true;
                else return false;
            }
            else if(s[r]=='1'){
                if(one>0)return true;
                else return false;
            }
}
bool fun_2(int l,int  r,int zero,int one,string&s){
 
            for(int i=s.size()-1;i>=l;i--){
                if(s[i]=='0')zero--;
                else one--;
            }
            if(s[l]=='0'){
                if(zero>0) return true;
                else return false;
            }
            else if(s[l]=='1'){
                if(one>0)return true;
                else return false;
            }
}
 
int main(){
    ios_base::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--){
        int n,q,zero=0,one=0; cin>>n>>q;
        string s; cin>>s;
 
        for(int i=0;i<s.size();i++){
            if(s[i]=='0')zero++;
            else one++;
        }
        //cout<<"zero="<<zero<<" "<<"one="<<one<<endl;
 
        while(q--){
            int l,r; cin>>l>>r;
 
            bool f1=fun_1(l-1,r-1,zero,one,s);
            bool f2=fun_2(l-1,r-1,zero,one,s);
 
            if(f1==false && f2==false)cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
 
        }
    }
 
return 0;
}
 
 
