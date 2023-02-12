#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
int sum1(vector<int>& v,int n){
   if(n==1){
     return v[0];
   }
   return v[n-1]+sum1(v,n-1);
}

int main(){

  //  int t; cin>>t;
  //  while(t--){
  //     ll ch,cd; cin>>ch>>cd;
  //     ll mh,md; cin>>mh>>md;
  //     ll k,d,h; cin>>k>>d>>h;
  //     bool flag=false;
  //     for(int i=0;i<=k;i++){
  //       ll p=ceil((ld)mh/((ld)cd+(((ld)d*(ld)i))));
  //       ll x=1000000000000000;
  //       if((p-1)<ceil(((ld)ch+((ld)h*((ld)k-(ld)i)))/md)){
  //           flag=true;
  //           break;
  //       }
  //     }
  //     (flag)? cout<<"YES"<<endl:cout<<"NO"<<endl;
  //  }

  vector<int> v={1,2,3,4,5};
  cout<<sum1(v,5)<<endl;



  return 0;
}