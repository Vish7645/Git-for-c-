#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

   int t; cin>>t;
   while(t--){
     int n; cin>>n;
     int a[n];
     for(int i=0;i<n;i++){
        cin>>a[i];
     }

     ll ans=1;
     for(int i=0;i<n;i++){
        ans*=a[i];
     }
     cout<<2022*(ans+n-1)<<endl;
   }


  return 0;
}