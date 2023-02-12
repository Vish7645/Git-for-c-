#include <bits/stdc++.h>
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
      sort(a,a+n);
      // 1 2 2 4
      // 1 2 3 4 4 5 6 7
      // 4 5 6 7 1 2 3 4
      if(n==2){
        cout<<a[0]<<" "<<a[1]<<endl;
        continue;
      }
      int x=-1,mn=INT_MAX;
      for(int i=1;i<n;i++){
        if(abs(a[i]-a[i-1]<mn)){
          x=i;
          mn=abs(a[i]-a[i-1]);
        }
      }

      for(int i=x;i<n;i++){
        cout<<a[i]<<" ";
      }
      for(int i=0;i<x;i++){
        cout<<a[i]<<" ";
      }
      cout<<endl;
   }

return 0;
}