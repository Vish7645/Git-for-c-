#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

   int t; cin>>t;
   while(t--){
     ll n; cin>>n;
     vector<int> v;
     vector<int> c;
     bool flag=true;
     ll r=0,e=0;
     ll y=1;
     while(n>0){
        int x=n%10;
        if(x%2==0){
            r+=(x/2)*y;
            e+=(x/2)*y;
        }
        else{
           if(flag){
            //   v.push_back(x/2),c.push_back(x/2+1);
              r+=(x/2)*y;
              e+=(x/2+1)*y;
              flag=false;
           }
           else{
            r+=(x/2+1)*y;
            e+=(x/2)*y;
            // v.push_back(x/2+1),c.push_back(x/2);
            flag=true;
           }
        }
        y*=10;
        n/=10;
     }
    //  int j=v.size();
    //  if(v[j-1]!=0 || j==1){
    //     cout<<v[j-1];
    //  }
    //  for(int i=j-2;i>=0;i--){
    //     cout<<v[i];
    //  }
    //  cout<<" ";
    //  int k=c.size();
    //  if(c[k-1]!=0 || k==1){
    //     cout<<c[k-1];
    //  }
    //  for(int i=k-2;i>=0;i--){
    //     cout<<c[i];
    //  }
     cout<<r<<" "<<e<<endl;
   }


//    int t; cin>>t;
//    while(t--){
//      ll n; cin>>n;
//      if((n%10+1)!=10){
//          if(n%2==0){
//             cout<<n/2<<" "<<n/2<<endl;
//          }
//          else{
//             cout<<n/2<<" "<<n/2+1<<endl;
//          }
//      }
//      else{
//          if(n==9){
//             cout<<4<<" "<<5<<endl;
//          }
//          else{
//             cout<<(n+1)/2+4<<" "<<(n+1)/2-5<<endl;
//          }
//      }
//    }

return 0;
}