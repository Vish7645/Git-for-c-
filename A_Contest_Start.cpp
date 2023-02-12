#include<bits/stdc++.h>
using namespace std;
#define ld long double
#define ll long long

int main(){

//    int t; cin>>t;
//    while(t--){
      ld n,x,t; cin>>n>>x>>t;
      ld sum=0;
      ld i=0;
      ld l=ceil(((n)*x-t)/x);
      if(l<0){
        ll ans=(ll)n*(n-1)/2;
        cout<<ans<<endl;
      }
      else{
        sum+=(l)*(int(t/x));
        sum+=(((n-l-1)*(n-l))/2);
        ll ans=(ll)sum;
        cout<<ans<<endl;
      }
//    }
                                                                                        

  return 0;
}