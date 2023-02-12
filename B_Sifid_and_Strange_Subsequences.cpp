#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

   int t; cin>>t;
   while(t--){
      int n; cin>>n;
      ll a[n];
      vector<ll> v;
      for(int i=0;i<n;i++){
        cin>>a[i];
      }
      sort(a,a+n);
      ll mx=INT_MAX;
      int i;
      for(i=1;i<n;i++){
         if(a[i]<0){
            mx=min(a[i]-a[i-1],mx);
         }
         else{
            break;
         }
      }
      int x=i;
      for(int j=i;j<n;j++){
        // cout<<a[j]<<" "<<mx<<endl;
          if(a[j]<=mx and a[j]-a[j-1]>=a[j]){
            mx=min(a[j]-a[j-1],mx);
            x++;
          }
          else{
            break;
          }
      }
      cout<<x<<endl;
   }
// -4, -3, -2, 0, 1, 4, 6
// mx=1


  return 0;
}