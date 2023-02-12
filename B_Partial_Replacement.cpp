#include<bits/stdc++.h>
using namespace std;

int main(){

   int t; cin>>t;
   while(t--){
      int n,k; cin>>n>>k;
      string s; cin>>s;
      int f=k-1;
      while(f>0){
        s.push_back('.');
        f--;
      }
      int i=0;
      int ans=0;
      if(s[0]=='*'){
          s[0]='x';
          ans++;
          i++;
      }
      for(i;i<n;i++){
        int x=i+k;
        // cout<<i<<" "<<x<<endl;
        while(x>=i){
            x--;
            if(s[x]=='*'){
                // cout<<x<<" ";
                i+=x;
                s[x]='x';
                ans++;
                break;
            }
        }
        //  cout<<endl;
      }
      if(s[n-1]=='*'){
        ans++;
      }
      cout<<ans<<endl;
   }


  return 0;
}