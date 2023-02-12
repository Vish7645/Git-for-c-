#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll mex(vector<ll> v){
    ll ans=0;
    for(auto x: v){
        if(x==0){
           ans++;
        }
    }
    ans+=v.size();
    return ans;
}

int main(){


   int t; cin>>t;
   while(t--){
     int n; cin>>n;
     vector<ll> a(n);
     for(int i=0;i<n;i++){
        cin>>a[i];
     }
     ll ans=0;
     for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
           vector<ll> v(begin(a)+i,begin(a)+j+1);
        //    for(auto x: v){
        //     cout<<x<<" ";
        //    }
        //    cout<<endl;
           ans+=mex(v);
        }
     }
     cout<<ans<<endl;
   }

   1 2 3 4 
   
   1 2 3 4 --> 4
   1 2 3   --> 3
   1 2     --> 2
   1       --> 1

   
   


  return 0;
}