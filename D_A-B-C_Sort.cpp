#include<bits/stdc++.h>
using namespace std;

int main(){

   int t; cin>>t;
   while(t--){
      int n; cin>>n;
      int a[n+1];
      for(int i=1;i<=n;i++){
        cin>>a[i];
      }
      a[0]=0;
      bool flag=true;
      for(int i=n;i>2;i-=2){
        if(min(a[i],a[i-1])<max(a[i-2],a[i-3])){
           flag=false;
           break;
        }
      }
      (flag)? cout<<"YES"<<endl:cout<<"NO"<<endl;
   }


  return 0;
}