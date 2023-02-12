#include<bits/stdc++.h>
using namespace std;

int main(){

   int t; cin>>t;
   while(t--){
     int n; cin>>n;
     int a[n];
     int b[n/2];
     for(int i=0;i<n;i++){
        cin>>a[i];
     }
     sort(a,a+n);
     int l=n;
     vector<int> v;
     for(int i=0;i<(n+1)/2;i++){
        v.push_back(a[i]);
        l--;
        if(l>0){
            v.push_back(a[n-1-i]);
            l--;
        }
     }
     if(v[0]!=v[1]){
        cout<<"YES"<<endl;
        for(auto k : v){
            cout<<k<<" ";
        }
        cout<<endl;
     }
     else{
        cout<<"NO"<<endl;
     }
   }



  return 0;
}
