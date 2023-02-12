#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll f(ll n){
  ll i=1;
  while(i<=n){
    i*=2;
  }
  return i;
}

void solve(){
     int n; cin>>n;
     ll a[n]; 
     cout<<n<<endl;
     for(int i=0;i<n;i++){
        cin>>a[i];
        cout<<i+1<<" "<<(1<<((int)log2(a[i])+1))-a[i]<<endl;
     }
}

// void make(vector<vector<int>> &v){
//   cout<<v.size()<<endl;
//     for(auto x: v){
//       cout<<x.size()<<endl;
//       for(auto y: x){
//         cout<<y<<" ";
//       }
//       cout<<endl;
//     }
// }

int main(){

  ios_base :: sync_with_stdio(false);
  cin.tie(NULL);

  // int t; cin>>t;
  // while(t--){
  //   solve();
  // }


  vector<vector<int>> v;
  v.push_back({1,2,3,4,5});
  v.push_back({3,4,5,6,7});
  v.push_back({5,6,7,8,9});
  // make(v);
  cout<<v[1].size()<<endl;


  return 0;
}