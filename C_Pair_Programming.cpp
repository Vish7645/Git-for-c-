#include<bits/stdc++.h>
using namespace std;

int main(){

   int t; cin>>t;
   while(t--){
     int k,n,m; cin>>k>>n>>m;
     int a[n],b[m];
     for(int i=0;i<n;i++){
        cin>>a[i];
     }
     for(int i=0;i<m;i++){
        cin>>b[i];
     }
     bool flag=true;
     int x=0,y=0;
     vector<int> v;
     while(x<n && y<m){
      int mn=min(a[x],b[y]);
        if(mn==a[x]){
            if(a[x]>k){
               flag=false;
               break;
            }
            else if(a[x]==0){
               k++;
            }
            v.push_back(a[x]);
            x++;
         }
        else{
            if(b[y]>k){
               flag=false;
               break;
            }
            else if(b[y]==0){
               k++;
            }
            v.push_back(b[y]);
            y++;
         }
        }
        for(int i=x;i<n;i++){
         if(a[i]>k){
            flag=false;
            break;
         }
         else if(a[i]==0){
            k++;
         }
         v.push_back(a[i]);
        }
        for(int i=y;i<m;i++){
         if(b[i]>k){
            flag=false;
            break;
         }
         else if(b[i]==0){
            k++;
         }
         v.push_back(b[i]);
        }
      if(flag){
         for(auto x: v){
               cout<<x<<" ";
         }
         cout<<endl;
      }
      else{
         cout<<-1<<endl;
      }
     }
     


  return 0;
}