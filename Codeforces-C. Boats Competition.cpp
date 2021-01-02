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
 
int check(vi a,int mx,int x){
    vi b(100+1,0);
    for(int i=1;i<a.size();i++)b[i]=a[i];
    int cnt=0;
 
    for(int i=1;i<=x/2;i++){
        int temp=x-i;
        if(i==temp){
            if(b[i]>=2){
              int k=b[i]/2;
              cnt+=k;
              b[i]-=k*2;
 
            }
        }
        else if(b[i]>0 && b[temp]>0){
            int k=b[i],l=b[temp];
            if(k>l)swap(k,l);
            cnt+=k;
            b[i]-=k;
            b[temp]-=k;
        }
    }
//cout<<"cnt="<<cnt<<endl;
return cnt;
}
 
int main(){
    ios_base::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--){
        int n,mx=0,team=0;
        cin>>n;
        vi a(n+1,0);
        for(int i=0;i<n;i++){
            int w;
            cin>>w;
            a[w]++;
            if(w>mx)mx=w;
        }
 
        mx*=2;
        for(int i=2;i<=mx;i++){
          int c=check(a,mx,i);
          if(c>team)team=c;
        }
        //for(int i=1;i<=n;i++)cout<<a[i]<<" ";
       cout<<team<<endl;
    }
 
 
return 0;
}
 
