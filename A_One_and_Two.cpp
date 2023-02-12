#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   int t; cin>>t;
   while(t--){
      int n; cin>>n;
      int a[n];
      int x=0;
      for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==2){
            x++;
        }
      }
      if(x%2==1){
        cout<<-1<<endl;
        continue;
      }
      int p=0;
      int y;
      for(int i=0;i<n;i++){
        if(a[i]==2){
           p++;
        }
        if(p==x/2){
            y=i+1;
            break;
        }
      }
      if(x==0){
        cout<<1<<endl;
      }
      else{
        cout<<y<<endl;
      }
   }

return 0;
}