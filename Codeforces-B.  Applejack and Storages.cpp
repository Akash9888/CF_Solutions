 
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
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(0);
    map<int,int>m;
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        m[a]++;
    }
    int four=0,two=0;
    for(auto it=m.begin();it!=m.end();it++){
        if(m[it->F]>=4){
            int temp=(m[it->F])/4;
            four+=temp;
            two+=((m[it->F])-(4*temp))/2;
        }
        else two+=(m[it->F])/2;
    }
 
    int q;
    cin>>q;
    while(q--){
       char ch;
       int a;
       cin>>ch>>a;
       if(m[a]>=4){
          int temp=m[a]/4;
          four-=temp;
          two-=(m[a]-(4*temp))/2;
 
          if(ch=='+')m[a]++;
          else m[a]--;
 
          if(m[a]>=4){
            int temp=m[a]/4;
            four+=temp;
            two+=((m[a])-(4*temp))/2;
          }
          else  two+=(m[a])/2;
 
       }
       else{
        two-=m[a]/2;
        if(ch=='+')m[a]++;
        else m[a]--;
        if(m[a]>=4){
            int temp=m[a]/4;
            four+=temp;
            two+=((m[a])-(4*temp))/2;
          }
        else  two+=(m[a])/2;
 
      }
      if(four>=2)cout<<"YES"<<endl;
      else if(four>=1 && two>=2)cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
 
 
    }
 
return 0;
}
 
 
 
