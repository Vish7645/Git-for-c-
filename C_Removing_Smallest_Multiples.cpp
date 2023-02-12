#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

   int t; cin>>t;
   while(t--){
      ll n; cin>>n;
      string s; cin>>s;
      ll i=1;
      ll marked[n+1]={};
      ll ans=0;
      while(i<=n){
        if(s[i-1]=='0'){
            ll j=i;
            while(s[j-1]=='0' && j<=n){
                if(marked[j]==1){
                    j+=i;
                }
                else{
                    marked[j]=1;
                    j+=i;
                    ans+=i;
                }
            }
        }
        i++;
      }
      cout<<ans<<endl;
   }



  return 0;
}