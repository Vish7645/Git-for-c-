#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

   int t; cin>>t;
   while(t--){
      int n; cin>>n;
      int a[n];
      ll ans=0;
      for(int i=0;i<n;i++){
        cin>>a[i];
        ans+=a[i];
      }
      int sum=INT_MAX;
      int cum=INT_MAX;
      for(int i=0;i<n;i++){
        if(a[i]%2==0){
            int x=0;
            while((a[i]&1)==0){
               a[i]>>=1;
               x++;
            }
            sum=min(sum,x);
        }
        else{
            int x=0;
            while((a[i]&1)==1){
                a[i]>>=1;
                x++;
            }
            cum=min(cum,x);
        }
      }
      if(ans%2==0){
        cout<<0<<endl;
      }
      else{
        cout<<min(sum,cum)<<endl;
      }
   }


  return 0;
}