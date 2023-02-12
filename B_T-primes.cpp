#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lld long long double

// void solve(ll n){
//     int ans=0;
//     for(ll i=2;i*i<n;i++){
//         if(n%i==0){
//             cout<<i<<" ";
//         }
//         if(n%(n/i)==0){
//             cout<<(n/i)<<" ";
//         }
//     }
//     ll x=sqrt(n);
//     if(x*x==n){
//         cout<<x<<endl;
//     }
// }

const ll n=1000001;
bool a[n+1]={};

void sieve(){
    for(ll i=2;i*i<=n;i++){
        if(a[i]==0){
            for(ll j=i*i;j<=n;j+=i){
              a[j]=1;
            }
        }
    }

}

int main(){

    
    sieve();

    int n; cin>>n;
    ll b[n];
    for(int i=0;i<n;i++){
        cin>>b[i];
    }

    for(int i=0;i<n;i++){
        ll x=sqrt(b[i]);
        if(a[x]==false && x*x==b[i] && b[i]!=1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }








  return 0;
}