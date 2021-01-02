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
 
int main(){
    ios_base::sync_with_stdio(0);
 
        string str,str2;
        cin>>str;
        str2=str;
        bool ab=false,ba=false,ab2=false,ba2=false;
 
        //BA
 
        for(int i=0;i<str.size()-1;i++){
            if(str[i]=='A' && str[i+1]=='B'){str[i]='$';str[i+1]='$';ab=true;break;}
        }
 
        for(int i=0;i<str.size()-1;i++){
            if(str[i]=='B' && str[i+1]=='A'){ba=true;break;}
        }
 
 
 
        for(int i=0;i<str2.size()-1;i++){
            if(str2[i]=='B' && str2[i+1]=='A'){str2[i]='$';str2[i+1]='$';ab2=true; break;}
        }
 
        for(int i=0;i<str2.size()-1;i++){
            if(str2[i]=='A' && str2[i+1]=='B'){ba2=true;break;}
        }
 
    if(ab==true && ba==true)cout<<"YES"<<endl;
    else if(ab2==true && ba2==true)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
 
 
return 0;
}
 
 
