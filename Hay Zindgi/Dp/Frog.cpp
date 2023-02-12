#include<bits/stdc++.h>
using namespace std;
#include <algorithm>

const int N=1e5+10;
int  d[N];
int dp[N];

int frog(int n){
    int cost=INT_MAX;
     if(n==0) return 0;
     if(dp[n]!=-1) return dp[n];
     cost=min(cost,frog(n-1)+abs(d[n]-d[n-1]));
     if(n>1){
        cost=min(cost,frog(n-2)+abs(d[n]-d[n-2]));
     }
     return dp[n]=cost;
}

int frog2(int n,int k){
   int cost=INT_MAX;
   if(n==0) return 0;
   for(int i=1;i<=k;i++){
      if(n>k){
        cost=min(cost,frog(n-i)+abs(d[n]-d[n-i]));
      }
   }
   return dp[n]=cost;
}

int main(){

    memset(dp,-1,sizeof(dp));
    int n,k; cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>d[i];
    }
    // cout<<frog(n-1)<<endl;
    cout<<frog2(n-1,k)<<endl;

   


  return 0;
}