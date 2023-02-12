#include<bits/stdc++.h>
using namespace std;
const int x=1e5+1;

int main(){

   int n,q; cin>>n>>q;
   string s; cin>>s;
   map<int,int> mp;
   int ans=0;
   for(int i=0;i<n-2;i++){
        if(s[i]=='a' && s[i+1]=='b' && s[i+2]=='c'){
            ans++;
            i+=2;
        }
   }
   while(q--){

      int a;
      char c; 
      cin>>a>>c;
      for(int i=a-1;i<min(n,a-1+3);i++){
        if(s[i]=='c' && s[i-1]=='b' && s[i-2]=='a'){
            ans--;
        }
      }
        s[a-1]=c;
      for(int i=a-1;i<min(n,a-1+3);i++){
        if(s[i]=='c' && s[i-1]=='b' && s[i-2]=='a'){
            ans++;
        }
      }
      cout<<ans<<endl;
   }
//    ccaaccaab


  return 0;
}