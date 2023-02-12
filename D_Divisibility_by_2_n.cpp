#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){

   int t; cin>>t;
   while(t--){
      int n; cin>>n;
      ll a[n],arr[n]={};
      int ans=0,ans2=0;
      for(int i=0;i<n;i++){
        int sum=0;
        cin>>a[i];
        while(a[i]>0){
            if((a[i]&1)==0){
                sum++;
            }
            else{
                break;
            }
            a[i]>>=1;
        }
        ans+=sum;
        int cum=0;
        int p=i+1;
        while(p>0){
            if((p&1)==0){
                cum++;
            }
            else{
                break;
            }
            p>>=1;
        }
        arr[i]=cum;
        ans2+=arr[i];
        // cout<<cum<<" ";
      }
      sort(arr,arr+n);
    //   cout<<endl;
      int key=0;
    //   int l=n-ans;
    //   cout<<ans<<" "<<ans2<<endl;
      if(ans+ans2<n){
        cout<<-1<<endl;
      }
      else{
        for(int i=n;i>=1;i--){
           if(ans>=n){
              cout<<key<<endl;
              break;
           }
              if(ans2>=arr[i-1]){
                  key++;
                  ans2-=arr[i-1];
                  ans+=arr[i-1];
              }
           if(ans>=n){
              cout<<key<<endl;
              break;
           }
        //    cout<<ans<<" ";
        }
      }
    //   cout<<endl;
   }


  return 0;
}