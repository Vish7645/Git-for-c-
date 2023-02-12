#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int m=1e9+7;

int main(){

   int t; cin>>t;
   while(t--){
      ll n,k; cin>>n>>k;
      ll ans=0;
      int i=0;
      ll sum=1;
      while(k){
        if((k&1)==1){
            ans=(ans+sum)%m;
        }
        sum*=n;
        sum%=m;
        i++;
        k>>=1;
      }
      cout<<ans<<endl;
   }


  return 0;
}