#include<bits/stdc++.h>
using namespace std;

int main(){

   int t; cin>>t;
   while(t--){
      int n; cin>>n;
      string s; cin>>s;
      map<string,int> mp;
      bool flag=false;
      for(int i=1;i<n;i++){
        string p=s.substr(i-1,2);
        if(s[i]==s[i-1] && s[i]==s[i+1]){
            i++;
        }
        if(mp[p]==0){
            mp[p]=1;
        }
        else{
            flag=true;
            break;
        }
      }
      if(flag){
        cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }
   }

  return 0;
}