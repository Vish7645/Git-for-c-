#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

   int t; cin>>t;
   while(t--){
      int n; cin>>n;
      if(n%2==0){
        cout<<"NO"<<endl;
        continue;
      }
      cout<<"YES"<<endl;
      int d=n/2;
      int x=1,y=2*n-(n/2)+1;
      while(d--){
        cout<<x<<" "<<y<<endl;
        x++,y++;
      }
      y=n+1;
      n/=2;
      n++;
      while(n--){
        cout<<x<<" "<<y<<endl;
        x++,y++;
      }
   }

return 0;
}