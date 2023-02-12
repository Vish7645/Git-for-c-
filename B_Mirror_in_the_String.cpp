// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long 

// int main(){

//    int t; cin>>t;
//    while(t--){
//       int n; cin>>n;
//       string s; cin>>s;
//       string c;
//       c+=s[0];
//       for(int i=1;i<n;i++){
//         if(s[0]==s[1]){
//             break;
//         }
//         if(s[i]<s[i-1]){
//             c+=s[i];
//         }
//         else{
//             break;
//         }
//       }
//       string k;
//       for(int i=c.size()-1;i>=0;i--){
//         c+=c[i];
//       }
//       cout<<c<<endl;
//    }


//   return 0;
// }

  // #include<bits/stdc++.h>
  // using namespace std;
  // #define ll long long
  // #define ld long double

  // int main(){

  //   int t; cin>>t;
  //   while(t--){
  //     ll n,k; cin>>n>>k;
  //     int x=0;
  //     ll p=k;
  //     while(p>0){
  //       x++;
  //       p>>=1;
  //     }
  //     //  cout<<"1, ";
  //     int ans=0;
  //     if(n==1){
  //       ans=0;
  //       n=0;
  //     }
  //     else{
  //       ans++;
  //       n-=2;
  //     }
  //     // cout<<ans<<" "<<n<<" "<<x<<endl;
  //     int l=1;
  //     while(l<x){
  //       if(n==0){
  //         break;
  //       }
  //         if((1<<l)>=n ){
  //           ans++;
  //           n=0;
  //           // cout<<"in 1, ";
  //         }
  //         else{
  //           ans++;
  //           n-=((1<<l));
  //           // cout<<"in 2, ";
  //           l++;
  //         }
  //         // cout<<ans<<" "<<n<<endl;
  //     }
  //     //  cout<<"4"<<endl;
  //     if(n!=0){
  //       ans+=ceil((ld)n/(ld)k);
  //     }
  //     cout<<ans<<endl;
  //     //  cout<<ans<<endl;
  //   }


  //   return 0;
  // }

  // // x=2


