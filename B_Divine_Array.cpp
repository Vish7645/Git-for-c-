#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int x=1e9+1;


int main(){

    int t; cin>>t;
    while(t--){
      int n; cin>>n;
      int a[n];
      for(int i=0;i<n;i++){
        cin>>a[i];
      }
      int b[n+1][n];
      for(int i=0;i<n;i++){
        b[0][i]=a[i];
      }
      
      for(int i=1;i<=n;i++){
        map<int,int> mp;
        for(int j=0;j<n;j++){
           mp[a[j]]++;
        }
        for(int j=0;j<n;j++){
          a[j]=mp[a[j]];
          b[i][j]=a[j];
        }
      }
      int q; cin>>q;
      while(q--){
        ll p,k; cin>>p>>k;
        (k<=n)? cout<<b[k][p-1]<<endl:cout<<b[n][p-1]<<endl; 
      }
    }

  return 0;
}
