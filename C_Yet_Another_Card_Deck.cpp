#include<bits/stdc++.h>
using namespace std;

int main(){

   int n,q; cin>>n>>q;
   int a[n];
   map<int,int> mp;
   map<int,int> m;
   for(int i=0;i<n;i++){
     cin>>a[i];
     if(mp[a[i]]!=0){
        continue;
     }
     else{
        mp[a[i]]=i+1;
     }
   }
   while(q--){
     int t; cin>>t;
     cout<<mp[t]<<" ";
     map<int,int> :: iterator it;
     for(it=mp.begin();it!=mp.end();it++){
        if(it->second<mp[t]){
            it->second++;
        }
     }
     mp[t]=1;
   }





  return 0;
}