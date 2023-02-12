#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

   int t; cin>>t;
   while(t--){
      ll n; cin>>n;
      int k; cin>>k;
      ll a[k];
      for(int i=0;i<k;i++){
        cin>>a[i];
        a[i]=n-a[i];
      }
      sort(a,a+k);
      ll sum=0;
      ll ans=0;
      for(int i=0;i<k;i++){
        sum+=a[i];
        ans++;
        if(sum>n-1){
            ans--;
            break;
        }
      }
      cout<<ans<<endl;
   }


  return 0;
}