#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

   int t; cin>>t;
   while(t--){
      ll a,b,c,m; cin>>a>>b>>c>>m;
        ll sum=0;
        
        if(a+b+c-3<m || (max(a,b)-2*m+m)>min(a,b)+c+1 || (max(b,c)-2*m+m>min(b,c)+a+1 || max(c,a)-m>min(a,c)+b+1)){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
   }
  return 0;
}
// 1 1 1 0
// 1 1 1 1
// 1 1 2 0
// 1 2 1 0
// 2 1 1 0
// 1 1 1 2
// 1 1 2 1
// 1 1 3 0
// 1 2 1 1
// 1 2 2 0
// 1 3 1 0
// 2 1 1 1
// 2 1 2 0
// 2 2 1 0
// 3 1 1 0
// 1 1 1 3
// 1 1 2 2
// 1 1 3 1
// 1 1 4 0
// 1 2 1 2
// 1 2 2 1
// 1 2 3 0
// 1 3 1 1
// 1 3 2 0
// 1 4 1 0
// 2 1 1 2
// 2 1 2 1
// 2 1 3 0
// 2 2 1 1
// 2 2 2 0
// 2 3 1 0
// 3 1 1 1
// 3 1 2 0
// 3 2 1 0
// 4 1 1 0
// 1 1 1 4
// 1 1 2 3
// 1 1 3 2
// 1 1 4 1
// 1 1 5 0
// 1 2 1 3
// 1 2 2 2
// 1 2 3 1
// 1 2 4 0
// 1 3 1 2
// 1 3 2 1
// 1 3 3 0
// 1 4 1 1
// 1 4 2 0
// 1 5 1 0
// 2 1 1 3
// 2 1 2 2
// 2 1 3 1
// 2 1 4 0
// 2 2 1 2
// 2 2 2 1








// 1 1 1 0
// 1 1 1 1
// 1 1 2 0
// 1 2 1 0
// 2 1 1 0
// 1 1 1 2
// 1 1 2 1
// 1 1 3 0
// 1 2 1 1
// 1 2 2 0
// 1 3 1 0
// 2 1 1 1
// 2 1 2 0
// 2 2 1 0
// 3 1 1 0
// 1 1 1 3
// 1 1 2 2
// 1 1 3 1
// 1 1 4 0
// 1 2 1 2
// 1 2 2 1
// 1 2 3 0
// 1 3 1 1
// 1 3 2 0
// 1 4 1 0
// 2 1 1 2
// 2 1 2 1
// 2 1 3 0
// 2 2 1 1
// 2 2 2 0
// 2 3 1 0
// 3 1 1 1
// 3 1 2 0
// 3 2 1 0
// 4 1 1 0
// 1 1 1 4
// 1 1 2 3
// 1 1 3 2
// 1 1 4 1
// 1 1 5 0
// 1 2 1 3
// 1 2 2 2
// 1 2 3 1
// 1 2 4 0
// 1 3 1 2
// 1 3 2 1
// 1 3 3 0