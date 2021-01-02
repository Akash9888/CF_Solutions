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
 
int samne(vi v,int value,int pos){
    int index=-1;
    for(int i=pos+1;i<v.size();i++){
        if(v[i]<value){index=i;break;}
    }
    return index;
}
 
 
int pichone(vi v,int value,int pos){
     int index=-1;
     for(int i=pos-1;i>=0;i--){
        if(v[i]<value){index=i;break;}
     }
     return index;
}
 
 
 
int main(){
    ios_base::sync_with_stdio(0);
    int t=1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vi v(n);
        map<int,int>m;
        for(int i=0;i<n;i++){
            cin>>v[i];
            m.insert(make_pair(v[i],i));
        }
        bool f=false;
        for(auto it=m.rbegin();it!=m.rend();it++){
            int x=pichone(v,it->F,it->S);
            int y=samne(v,it->F,it->S);
            //cout<<x+1<<" "<<y+1<<endl;
            if(x>=0 && y>=0){
                cout<<"YES"<<endl;
                cout<<x+1<<" "<<(it->S)+1<<" "<<y+1<<endl;
                f=true;
                break;
            }
            else continue;
 
        }
 
    if(!f)cout<<"NO"<<endl;
 
    }
 
 
return 0;
}
 
 
