#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

   int t; cin>>t;
   while(t--){
      ll p=1000000000+7;
      ll n; cin>>n;
      cout<<(2022*(((n*(n+1)*(2*n+1))/3)-((n*(n+1))/2)))%p<<endl;
   }
   
  return 0;
}