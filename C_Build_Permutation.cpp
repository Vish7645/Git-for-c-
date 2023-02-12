#include<bits/stdc++.h>
using namespace std;

int expo(int a, int b){
    if(b==0){
        return 1;
    }
    int c=expo(a,b/2);
    if(b&1){
        return a*(c*c);
    }
    else{
        return c*c;
    }
}


int main(){

   int t; cin>>t;
   while(t--){
      int n; cin>>n;
      map<int,int> mp;
      for(int i=0;i<n;i++){
        mp[i]=1;
      }
      int x=sqrt((n-1)+(n-1));

      vector<int> v;
      v.push_back(x*x-n+1);
      mp[x*x-n+1]=0;
      for(int i=n-2;i>=0;i--){
         while(mp[x*x-i]!=1){
            // cout<<x<<" ";
            x-=1;
         }
        //  cout<<x<<endl;
         v.push_back(x*x-i);
         mp[x*x-i]=0;
      }
      for(int i=v.size()-1;i>=0;i--){
        cout<<v[i]<<" ";
      }
      cout<<endl;
   }


  return 0;
}