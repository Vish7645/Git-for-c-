#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

   int t; cin>>t;
   while(t--){
      int n; cin>>n;
      int a[n];
      for(int i=0;i<n;i++){
         cin>>a[i];
      }
      set<int> s;
      for(int i=0;i<n;i++){
        s.insert(a[i]);
      }
      if(n<4){
        cout<<s.size()<<endl;
      }
      else{
        if(s.size()==2){
            cout<<n/2+1<<endl;
        }
        else{
            cout<<n<<endl;
        }
      }
   }



  return 0;
}