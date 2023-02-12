#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

   int t; cin>>t;
   while(t--){
      int n; cin>>n;
      ll a[n],b[n];
      for(int i=0;i<n;i++){
        cin>>a[i];
      }
      vector<ll> v;
      for(int i=0;i<n;i++){
        cin>>b[i];
        v.push_back(b[i]-a[i]);
      }
      sort(v.begin(),v.end());
      int x=0,y=n-1,ans=0;
      while(x<y){
        if(v[x]+v[y]>=0){
            ans++;
            x++;
            y--;
        }
        else{
            x++;
        }
      }
      cout<<ans<<endl;
   }


  return 0;
}