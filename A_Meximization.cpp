#include<bits/stdc++.h>
using namespace std;

int main(){

   int t; cin>>t;
   while(t--){
     int n; cin>>n;
     int a[n];
     set<int> s;
     map<int,int> mp;
     for(int i=0;i<n;i++){
         cin>>a[i];
     }
     sort(a,a+n);
     cout<<a[0]<<" ";
     vector<int> v;
     for(int i=1;i<n;i++){
        if(a[i]==a[i-1]){
           v.push_back(a[i]);
        }
        else{
            cout<<a[i]<<" ";
        }
     }
     for(auto x: v){
        cout<<x<<" ";
     }
     cout<<endl;
   }


  return 0;
}