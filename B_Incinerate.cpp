#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

   int t; cin>>t;
   while(t--){
     int n,k; cin>>n>>k;
     ll a[n],b[n];
     map<ll,ll> mp;
     for(int i=0;i<n;i++){
        cin>>a[i];
     }
     for(int i=0;i<n;i++){
        cin>>mp[a[i]];
     }
     ll mn=INT32_MAX;
     for(auto x=mp.rbegin();x!=mp.rend();x++){
        mn=(x->second=min(mn,x->second));
     }
     sort(a,a+n);
     ll sum=0;
     for(int i=0;i<n-1;i++){
        if(mp[a[i]]!=mp[a[i+1]]){
           ll f=a[i];
           a[i]-=sum;
           while(a[i]>0 && k>0){
             a[i]-=k;
             sum+=k;
             if(a[i]<=0){
                k-=mp[a[i+1]];
                break;
             }
             else{
                k-=mp[f];
             }
           }
        }
     }
     ll f=a[n-1];
     a[n-1]-=sum;
     while(a[n-1]>0 && k>0){
        a[n-1]-=k;
        k-=mp[f];
     }
     (a[n-1]<=0)? cout<<"YES"<<endl:cout<<"NO"<<endl;
   }


  return 0;
}


