#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

    
     int t; cin>>t;
     while(t--){
        int n; cin>>n;
        ll a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        } 
        ll b[n+1]={};
        vector<vector<int>> v;
        for(int i=0;i<n;i++){
           vector<int> x;
           while(a[i]>=1){
              if(a[i]<=n){
                x.push_back(a[i]);
                b[a[i]]=1;
              }
              a[i]>>=1;
           }
           v.push_back(x);
        }
        
        bool flag=true;
    //     for(int i=1;i<=n;i++){
    //        if(b[i]==0){
    //         flag=false;
    //         break;
    //        }
    //     }
    //     if(flag){
    //         sort(v.begin(),v.end());
    //         for(int i=0;i<n-1;i++){
    //             if(v[i+1]-v[i]>1){
    //                 flag=false;
    //                 break;
    //             }
    //         }
    //     }

    //     if(flag){
    //         cout<<"YES"<<endl;
    //     }
    //     else{
    //         cout<<"NO"<<endl;
    //     }
    //  }
    map<int,pair<int,int>> ml;
    int b[n]={};
    for(int i=0;i<n;i++){
       for(int j=0;j<v[i].size();j++){
          
       }
    }


  return 0;
}