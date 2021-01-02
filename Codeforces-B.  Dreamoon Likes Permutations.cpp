 
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
 
void fun_2(int n,vi&v,map<int,int>&mp){
    vi x(n,0),y(n,0);
    int mx=0,cnt=0,temp;
    bool f=false,f2=false;
 
    for(int i=v.size()-1;i>=0;i--){
        if(x[v[i]]==0){
            x[v[i]]++;
            mx++;
        }
        else if(x[v[i]]==1){temp=i;break;}
 
    }
    for(int i=1;i<=mx;i++){
        if(x[i]==1)cnt++;
        else cnt=-1;
    }
    if(cnt==mx)f=true;
    x.clear();
    cnt=0;
 
    for(int i=temp;i>=0;i--){
        if(y[v[i]]==0){
            y[v[i]]++;
        }
        else if(y[v[i]]==1){break;}
    }
    for(int i=1;i<=(n-mx);i++){
        if(y[i]==1)cnt++;
        else cnt=-1;
    }
    if(cnt==(n-mx))f2=true;
    y.clear();
 
     //cout<<"mx----="<<mx<<" "<<"mx2---="<<mx2<<endl;
    if(f==true && f2==true)mp.insert(make_pair(n-mx,mx));
 
 
}
 
 
 
void fun_1(int n,vi&v,map<int,int>&mp){
    vi x(n,0),y(n,0);
    int mx=0,cnt=0,temp;
    bool f=false,f2=false;
 
    for(int i=0;i<v.size();i++){
        if(x[v[i]]==0){
            x[v[i]]++;
            mx++;
        }
        else if(x[v[i]]==1){temp=i;break;}
    }
 
    for(int i=1;i<=mx;i++){
        if(x[i]==1)cnt++;
    }
    if(cnt==mx)f=true;
    x.clear();
 
    cnt=0;
 
    for(int i=temp;i<v.size();i++){
        if(y[v[i]]==0){
            y[v[i]]++;
        }
        else if(y[v[i]]==1)break;
    }
    for(int i=1;i<=(n-mx);i++){
        if(y[i]==1)cnt++;
    }
    if(cnt==(n-mx))f2=true;
     y.clear();
 
   // cout<<"mx="<<mx<<" "<<"mx2="<<mx2<<endl;
    if(f==true && f2==true)mp.insert(make_pair(mx,(n-mx)));
 
}
 
 
int main(){
    ios_base::sync_with_stdio(0);
    int t=1;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,a,mx=0;
        cin>>n;
        vi v,v2(n,0);
        for(int i=0;i<n;i++){
            cin>>a;
            if(a>mx)mx=a;
            v2[a]++;
            v.pb(a);
        }
 
        bool f=true;
        for(int i=1;i<=mx;i++){
            if(v2[i]>2 || v2[i]==0){f=false;break;}
        }
        if(!f)cout<<0<<endl;
        else{
             v2.clear();
             map<int,int>mp;
             fun_1(n,v,mp);
             fun_2(n,v,mp);
             cout<<mp.size()<<endl;
             for(auto it=mp.begin();it!=mp.end();it++)cout<<it->F<<" "<<it->S<<endl;
        }
 
 
    }
 
 
return 0;
}
 
 
