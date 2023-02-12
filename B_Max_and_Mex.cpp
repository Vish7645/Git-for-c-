#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

   int t; cin>>t;
   while(t--){
      ll n,k; cin>>n>>k;
      int a[n];
      map<int,int> mp;
      for(int i=0;i<n;i++){
         cin>>a[i];
         mp[a[i]]=1;
      }
      ll mex;
      int ans=mp.size();
      for(int i=0;i<=n;i++){
        if(mp[i]==0){
           mex=i;
           break;
        }
      }
    //   cout<<mex<<" "<<a[n-1]<<" "<<mp[(mex+a[n-1])/2]<<" "<<n-1<<" "<<ans<<endl;
    //   for(auto c: mp){
    //     cout<<c.first<<" "<<c.second<<endl;
    //   }
      sort(a,a+n);
      if(a[n-1]!=n-1){
          if(mp[ceil(((float)mex+(float)a[n-1])/2)]==0 && k>0){
            ans++;
          }
      }
      else{
        ans=n+k;
      }
      cout<<ans<<endl;
   }


  return 0;
}