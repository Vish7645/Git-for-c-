#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lld long double

int main(){

   int t; cin>>t;
   while(t--){
     ll n,k; cin>>n>>k;
     ll x=0;
     while(x<k){
        x<<=1;
     }
     x>>=1;
     int ans=0;
     ll p=0;
     while(p<=x){
        if(n<=p){
            break;
        }
        else{
            ans++;
            p<<=1;
        }
     }
     if(n>p){
        ans+=(ceil((lld)(n-p)/(lld)k));
     }
     cout<<ans<<endl;
   }


  return 0;
}