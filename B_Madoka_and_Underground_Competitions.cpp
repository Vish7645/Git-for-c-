// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//    int t; cin>>t;
//    while(t--){
//       int n,k,r,c; cin>>n>>k>>r>>c;
      
//       int p=c%k - r%k;
//       int x=(k+p)%k;
//       string s;
//       for(int i=0;i<k;i++){
//         if(i==x){
//             s+='X';
//         }
//         else{
//             s+='.';
//         }
//       }

//       for(int i=0;i<n;i++){
//         int y=n/k;
//         while(y--){
//             cout<<s;
//         }
//         cout<<endl;
//         s[x]='.';
//         x=(x+1)%k;
//         s[x]='X';

//       }
//    }


//   return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
      ll n;cin>>n;
      vector<ll>vec,v1,v2;
      while(n!=0){
        ll rem = n%10;
        vec.push_back(rem);
        n = n/10;
      }
      reverse(vec.begin(),vec.end());
         v1=v2=vec;
         ll f1=0,f2=0;
      for (ll i = 0; i < v1.size()-1; i++)
      {
          ll curr_sum = v1[i]+v1[i+1];
          if(curr_sum<10){
            v1[i]=-1;v1[i+1]=curr_sum;
            f1=1;
            break;
          }
      }
      
      for (ll i = v2.size()-1; i >0 ; i--)
      {
          ll curr_sum = v2[i]+v2[i-1];
          if(curr_sum>=10){
            v2[i]=-1;v2[i-1]=curr_sum;
            f2=1;
            break;
          }
      }
      
     if((f1==1 && f2==1) || (f1==0 && f2==1)){
        for(auto val : v2){
            if(val!=-1) cout<<val<<"";
          }
        }

     else {
        for(auto val : v1){
            if(val!=-1) cout<<val<<"";
          }
        }
      cout<<endl;
    }
    return 0;
}