#include<bits/stdc++.h>
using namespace std;

int main(){

   int t; cin>>t;
   while(t--){
      int n; cin>>n;
      string s; cin>>s;
      int ans=0;
      int x=0,y=0,p=0,q=0;
      bool flag=true,cool=true;
      for(int i=0;i<n;i++){
         if(s[i]=='M'){
            y++;
         }
         else{
            x++;
         }

         if(s[i]=='M' && y>x){
             flag=false;
         }


         if(s[n-1-i]=='M'){
            q++;
         }
         else{
            p++;
         }


         if(s[n-1-i]=='M' && p<q){
            cool=false;
         }
      }
      if(cool && flag && y*2==x){
        cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }
   }


  return 0;
}