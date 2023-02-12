#include<bits/stdc++.h>
using namespace std;

int main(){

  int a[]={1,2,3,4,4,3,2,1};
  int i=0;
  int n=8;
  bool flag = false;
  while(i<=n/2){
    if(a[i]!=a[n-1-i]){
      flag=true;
    }
    i++;
  }
  if(!flag){
    cout<<"Yes"<<endl;
  }
  else{
    cout<<"No"<<endl;
  }


  
  
  // int t; cin>>t;
  // while(t--){
  //    int n; cin>>n; 
  //    int a[n];
  //    map<int,int> m;
  //    for(int i=0;i<n;i++){
  //        cin>>a[i];
  //        if(m.find==m.end()){
  //          m.insert(a[i],i);
  //        }
  //    }
  //    for(auto s:a){
  //       int m;
  //       int sum=1;
  //       for(int i=s.second+1;i<n;i++){
  //          if(s==a[i]){
  //             if((i-s.second)%2!=0){
  //                sum++;
  //             }
  //             else{
  //                sum=1;
  //             }
  //             m=max(m,sum);
  //          }
  //       }
  //    }
  // }
   
          //// Default value of the map is 0;

  int a[]={1,2,3,4,4,3,2,1};
   int n=8;
   map<int,int> m;
   for(int i=0;i<n;i++){
      m[a[i]]=i+m[a[i]];
   }
   
   bool flag = true;
   for(auto x: m){
         if((x.second)!=n-1){
         flag=false;
         }
   }
   if(flag){
      cout<<"Yes"<<endl;
   }
   else{
      cout<<"No"<<endl;
   }

  // make case for odd

  return 0;
}