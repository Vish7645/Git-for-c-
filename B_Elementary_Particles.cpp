#include<bits/stdc++.h>
using namespace std;

int main(){

   int t; cin>>t;
   while(t--){
      int n; cin>>n;
      int a[n];
      map<int,int> mp;
      map<int,int> m;
      int ans=n;
      for(int i=0;i<n;i++){
        cin>>a[i];
        if(m[a[i]]==0){
            m[a[i]]=i+1;
        }
        else{
            ans=min(ans,abs(m[a[i]]-(i+1)));
            m[a[i]]=i+1;
        }
      }
    //   cout<<ans<<" "; 
      if(ans==n){
        cout<<-1<<endl;
      }
      else{
        cout<<n-ans<<endl;
      }
   }


  return 0;
}