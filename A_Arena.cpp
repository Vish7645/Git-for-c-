#include<bits/stdc++.h>
using namespace std;

int main(){

   int t; cin>>t;
   while(t--){
     int n; cin>>n;
     int a[n];
     map<int,int> m;
     for(int i=0;i<n;i++){
        cin>>a[i];
     }
     int ans=0;
     sort(a,a+n);
     for(int i=1;i<n;i++){
        if(a[i]!=a[0]){
            ans++;
        }
     }
     cout<<ans<<endl;
   }


  return 0;
}