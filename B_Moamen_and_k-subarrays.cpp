#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll p=1e5;

int main(){

   int t; cin>>t;
   while(t--){
     ll n,k; cin>>n>>k;
     ll a[n],b[p];
     for(int i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i];
     }
     map<ll,int> mp;
     sort(b,b+n);
     for(int i=0;i<n;i++){
        mp[b[i]]=i;
     }
     ll l=k,x=1;
     for(int i=1;i<n;i++){
        if(mp[a[i]]-mp[a[i-1]]==1){
            if(n-k+1<=x){
                l--;
                x=1;
            }
            else{
                x++;
            }
        }
        else{
            l--;
            x=1;
        }
     }
     l--;
     (l>=0)? cout<<"YES"<<endl:cout<<"NO"<<endl;
   }
   

  return 0;
}