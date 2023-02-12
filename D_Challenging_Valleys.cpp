#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

   int t; cin>>t;
   while(t--){
      int n; cin>>n;
      ll a[n];
      for(int i=0;i<n;i++){
        cin>>a[i];
      }
      bool flag=false;
      int x=0,k=0;
      for(int i=1;i<n;i++){
         if(a[i]>a[i-1]){
            x=a[i-1];
            k=i;
         }
         else if(a[i]<a[i-1] && x!=0 && k<i){
            flag=true;
            break;
         }
      }
      if(flag){
        cout<<"NO"<<endl;
      }
      else{
        cout<<"YES"<<endl;
      }


     

   }




  return 0;
}

