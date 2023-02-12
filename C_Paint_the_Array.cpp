#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a,ll b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}

int main(){

   int t; cin>>t;
   while(t--){
      int n; cin>>n;
      ll a[n];
      for(int i=0;i<n;i++){
        cin>>a[i];
      }

      ll x=a[0],y=a[1];

      for(int i=0;i<n;i++){
        if(i%2==0){
            x=gcd(x,a[i]);
        }
        else{
            y=gcd(y,a[i]);
        }
      }

      bool flag=true,cool=true;
      for(int i=0;i<n;i++){
        if(i%2==0){
            if(a[i]%y==0){
                cool=false;
            }
        }
        else{
            if(a[i]%x==0){
                flag=false;
            }
        }
      }

      if(flag && x!=1){
        cout<<x<<endl;
      }
      else if(cool && y!=1 && !flag){
        cout<<y<<endl;
      }
      else{
        cout<<0<<endl;
      }
   }


  return 0;
}