#include<iostream>
using namespace std;
#include <cstring>

const int N=1e5+10;

int  dp[N];
int fibo(int n)
{
    if(n==1) return 1;
    if(n==0) return 0;
    if(dp[n]!=-1) return dp[n];
    return dp[n]=fibo(n-1)+fibo(n-2);
}

// int fib(int n){
//     if(n==1) return 1;
//     if(n==0) return 0;
//     return fib(n-1)+fib(n-2);
// }

int main(){

   memset(dp,-1,sizeof(dp));
   int t; cin>>t;
   cout<<fibo(t)<<endl;
  //  cout<<fib(t)<<endl;   // time complexity O(pow(2,n))
    //                                             fib(6)
    //                                      /                    \ 
    //                                    /                        \        
    //                                  /                            \
    //                                /                                \
    //                             fib(5)                             fib(4) 
    //                         /          \                         /        \
    //                       /             \                       /          \
    //                 fib(4)               fib(3)          fib(3)             fib(2)
    //                /    \              /     \           /    \            /   \
    //               /      \            /       \         /      \          /     \
    //          fib(3)     fib(2)      fib(2)  fib(1)   fib(2)   fib(1)    fib(1)  fib(0)
    //          /   \       /    \       /   \           /   \
    //         /     \     /      \     /     \         /     \
    //     fib(2) fib(1) fib(1) fib(0) fib(1) fib(0)  fib(1) fib(0)
    //   /    \
    //  /      \
    // fib(1)  fib(0)

  return 0;
}