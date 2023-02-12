// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//    int t; cin>>t;
//    while(t--){
//      int n; cin>>n;
//      int a[n];
//      for(int i=0;i<n;i++){
//         cin>>a[i];
//      }
//      int mx=1,store=a[0];
//      int x=0,y=0,ans=1;
//      for(int i=1;i<n;i++){
//        if(a[i]==a[i-1]){
//          ans++;
//          if(i==n-1){
//             mx=max(mx,ans);
//             if(mx==ans){
//             store=a[i-1];
//             }
//             x=i-ans;
//             y=i;
//             ans=1;
//          }
//        }
//        else if(ans>1 && a[i]!=a[i-1]){
//          mx=max(mx,ans);
//          if(mx==ans){
//            store=a[i-1];
//          }
//          x=i-ans;
//          y=i;
//          ans=1;
//        }
//      }
//      int l=0,r=n-1;
//      for(int i=n-1;i>=0;i--){
//         if(a[i]==store){
//             r=i;
//             break;
//         }
//      }
//      for(int i=i;i<n;i++){
//         if(a[i]==store){
//             l=i;
//             break;
//         }
//      }
//      int f=0;
//      if(x-l>r-y){
//         int d=y-l;
//         while(mx<d){
//             mx*=2;
//             f++;
//         }
//         if(r-y>0){
//             f++;
//         }
//      }
//      else{
//         int d=r-x;
//         while(mx<d){
//             mx*=2;
//             f++;
//         }
//         if(x-l>0){
//             f++;
//         }
//      }
//      cout<<f<<endl;
//    }


//   return 0;
// }

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

   int t; cin>>t;
   while(t--){
      int n; cin>>n;
      int a[n];
      for(int i=0;i<n;i++){
         cin>>a[i];
      }
      
      int d=n-1;
      for(int i=0;i<n-1;i++){
         if(a[i]!=a[n-1]){
            d=i;
            break;
         }
      }
      int e=n-2;
      for(int i=n-2;i>=0;i--){
         if(a[i]!=a[n-1]){
             e=i;
             break;
         }
      }
      int ans=0;
      if(d==n-1){
         cout<<ans<<endl;
      }
      else{
         int p=n-e-1;
         for(int i=e;i>=d;i--){
            if(a[i]!=a[n-1]){
               i-=(n-(i+1)-1);
               p+=(n-(i+1));
               ans++;
            }
         }
         cout<<ans<<endl;
      }
   }


  return 0;
}