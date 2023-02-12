#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

//    int t; cin>>t;
//    while(t--){
//       ll l,r,x; cin>>l>>r>>x;
//       ll a,b; cin>>a>>b;
//       if(b<a){
//         int y=a-b;
//         int x=b-l;
//         b=r-x;
//         a=b-y;
//       }
//     //   cout<<a<<" "<<b<<endl;
//       if(a==b){
//         cout<<0<<endl;
//       }
//       else if(a+x<=b){
//         cout<<1<<endl;
//       }
//       else if(b+x<=r || a-x>=l){
//         cout<<2<<endl;
//       }
//       else if(a+x<=r && b-x>=l){
//         cout<<3<<endl;
//       }
//       else{
//         cout<<-1<<endl;
//       }
//    }

char S[3], T[3]; cin >> S[0] >> S[1] >> S[2]; cin >> T[0] >> T[1] >> T[2];
if(*S==*T){
    cout<<"YEs"<<endl;
}
else{
    cout<<"NO"<<endl;
}

//    -3 3 4
//    -1 0


  return 0;
}