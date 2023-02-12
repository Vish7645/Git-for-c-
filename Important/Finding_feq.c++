#include<bits/stdc++.h>
using namespace std;

// int gcd(int a, int b)
// {
//     int result = fmin(a, b); // Finding minimum of a nd b
//     while (result > 0) {
//         if (a % result == 0 && b % result == 0) {
//             break;
//         }
//         result--;
//     }
//     return result; // return gcd of a nd b
// }



int main(){

  //  int a[]={5,1,2,2,2,4};
  //  map<int,int> m;
  //  for(int i=0;i<6;i++){
  //      m[a[i]]++;
  //  }
  //  for(auto x: m){
  //    cout<<x.first<<" "<<x.second<<endl;
  //  }

  // int t; cin>>t;
  // while(t--){
  //    int n; cin>>n;
  //    int a[n];
  //    for(int i=0;i<n;i++){
  //       cin>>a[i];
  //    }
  //    sort(a,a+n,greater<int>());
  //    int sum=0;
  //    for(int i=0;i<n-1;i++){
  //       if(a[i]==1){
  //          break;
  //       }
  //       else if(a[i]%2==0){
  //           sum+=n-1-i;
  //       }
  //       else{
  //           int x=i+1;
  //           while(x<n-1){                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  
  //              if(gcd(a[x],a[x+1])!=1){
  //                 sum+=1;
  //              }
  //              x++;
  //           }
  //       }
  //    }
  //    cout<<sum<<endl;
  // }

//   int t; cin>>t;
//   while(t--){
//      int n; cin>>n;
//      int a[n];
//      bool flag=false;
//      for(int i=0;i<n;i++){
//            cin>>a[i];
//            if(i>0 && i<n-1){
//              if(a[i]!=i+1){
//                flag=true;
//              }
//            }
//         }
//      if((a[0]!=1) && (a[n-1]!=n)){
//        if(a[0]==n && a[n-1]==1){
//          cout<<3<<endl;
//        }
//         else if(flag){
//            cout<<2<<endl;
//         }
//         else{
//            cout<<1<<endl;
//         }
//      }
//      else if((a[0]!=1) || (a[n-1]!=n)){
//         cout<<1<<endl;
//      }
//      else{
//         if(flag){
//            cout<<1<<endl;
//         }
//         else{
//            cout<<0<<endl;
//         }
//      }
//   }


// int t; cin>>t;
// while(t--){
//    long long int n; cin>>n;
//    if(n==1){
//       cout<<2<<endl;
//    }
//    else if(n%3==0){
//       cout<<n/3<<endl;
//    }
//    else{
//       cout<<n/3+1<<endl;
//    }
// }

// 
// int t; cin>>t;
// while(t--){
//    int n; cin>>n;
//    int a[n];
//    cout<<n<<endl;
//    for(int i=0;i<n;i++){
//       a[i]=i+1;
//       cout<<a[i]<<" ";
//    }
//    cout<<"\n";

//    int x=1;
//    while(x!=n){
//       swap(a[x-1],a[n-1]);
//       for(int i=0;i<n;i++){
//           cout<<a[i]<<" ";
//       }
//       cout<<"\n";
//       x++;
//    }
// }

// int t; cin>>t;
// while(t--){
//    int n,H,M; cin>>n>>H>>M;
//    int hour=0,minu=0
//    while(n--){
//       int h,m; cin>>h>>m;
//       if(h<H){
//          hour=min(24+h-H,hour);
//          if(hour==24+h-H){
//             if(minu>m){
//                minu=m+60-M;
//             }
//          }
//       }
// //       else{
//          hour=min(h-M,hour);
//       }
//    }
// }

// int t; cin>>t;
// while(t--){
//    int n; cin>>n;
//    int ans=0,a=0,b=0,c=0,d=0;
//    while(n--){
//       int x,y; cin>>x>>y;
//       if(y==0){
//         if(x>0){
//            a=max(a,x);
//         }
//         else{
//            b=min(b,x);
//         }
//       }
//       else{
//         if(y>0){
//            c=max(c,y);
//         }
//         else{
//            d=min(d,y);
//         }
//       }
//    } 
//    ans=2*(a+abs(b)+c+abs(d));
//    cout<<ans<<endl;
// }

int t; cin>>t;
while(t--){
   int n; cin>>n;
   long long int a[n];
   for(int i=0;i<n;i++){
      cin>>a[i];
   }
   long long int x=0,count=0;
   if(n==1 || n==2){
      continue;
   }
   else{
      x=a[0]-a[1];
      // for(int i=2;i<n;i++){
      //     int y=a[i-1]-a[i];
      //     if(x>0 && y<0){
      //       // cout<<"x : "<<x<<" y : "<<y<<endl;
      //       count++;
      //       x=-1;
      //     }
      //     else if(x<0 && y>0){
      //       // cout<<"x : "<<x<<" y : "<<y<<endl;
      //       count+=2;
      //       x=1;
      //     }
      // }
      if(x>0){
         for(int i=2;i<n;i++){
            long long int y=a[i-1]-a[i];
            if(y<0){
               count+=2;
            }
         }
      }
      else if(x<=0){
         for(int i=2;i<n;i++){
            long long int y=a[i-1]-a[i];
            if(x>0 && y<0){
               count++;
               x=-1;
            }
            else if(x<0 && y>0){
               count++;
               x=1;
            }
         }
      }
   }

   if(count>1){
     cout<<"No"<<endl;
   }
   else{
      cout<<"Yes"<<endl;
   }
}

// int t; cin>>t;
// while(t--){
//    int n,a,b; cin>>n>>a>>b;
//    string s;
//    char c='a';
//    for(int i=1;i<=b;i++){
//       s.push_back(c);
//       c++;
//    }
//    c--;
//    for(int i=b;i<a;i++){
//       s.push_back(c);
//    }

//    if(n%a==0){
//       int x=n/a;
//       while(x--){
//          cout<<s;
//       }
//    }
//    else{
//      int x=n/a;
//      while(x--){
//         cout<<s;
//      }
//      int y=n%a;
//      string l=s.substr(0,y);
//      cout<<l;
//    }
//    cout<<"\n";
// }






  return 0;
}