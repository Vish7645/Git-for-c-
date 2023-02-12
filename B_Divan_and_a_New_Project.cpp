#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

   int t; cin>>t;
   while(t--){
      int n; cin>>n;
      ll a[n];
      map<int,int> mp;
      for(int i=0;i<n;i++){
         cin>>a[i];
         mp[a[i]]++;
      }
      int x;
      if(n%2==0){
        x=n/2+1;
      }
      else{
        x=(n+1)/2;
      }
      ll b[n+1];
      for(auto p: mp){
        
      }
   }


  return 0;
}