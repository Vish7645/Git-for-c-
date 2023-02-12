#include<bits/stdc++.h>
using namespace std;
const int N=25e2+1;
vector<int> a={4,5,2,5,8,0,94,38,4,9,35,5};

int subseq(int arr[],int n,int ans,int act){
    if(n==1){
        if(arr[n]<=act){
            return ans+1;
        }
        else{
            return ans;
        }
    }
    subseq(arr,n-1,ans,act);
    if(arr[n]<=act){
        act=arr[n-1];
        ans++;
    }
}

int dp[N];

int lis(int i){
    int ans=1;
    for(int j=0;j<i;j++){
       if(a[i]>a[j]){
          ans=max(ans,lis(j)+1);
       }
    }
    return ans;
}



int main(){

    
   memset(dp,-1,sizeof(dp));
   int ans=0;
   for(int i=0;i<12;i++){
      ans=max(ans,lis(i));
   }
   cout<<ans;
//    int mx=INT_MIN;
//    for(int i=11;i>=0;i++){
//       int ans=1;
//       ans=subseq(arr,i,ans,arr[i]);
//       mx=max(mx,ans);
//    }
//    cout<<mx<<endl;


  return 0;
}