#include<bits/stdc++.h>
using namespace std;

int main(){

   int t; cin>>t;
   while(t--){
      string s; cin>>s;
      bool a=false,b=true;
      for(int i=0;i<s.size()-1;i++){
        if(s[i]=='1' && s[i]==s[i+1]){
            a=true;
        }
        if(a && (s[i]=='0' && s[i]==s[i+1])){
            b=false;
        }
      }

      if(b){
        cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }
   }


  return 0;
}