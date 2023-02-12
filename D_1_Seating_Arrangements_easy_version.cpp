#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

   int t; cin>>t;
   while(t--){
        int n,m; cin>>n>>m;
        ll a[n][m];
        vector<vector<ll>> v;
        ll b[n][m];
        map<int,map<ll,int>> mp;
        for(int i=0;i<n;i++){
            vector<ll> l;
            for(int j=0;j<m;j++){
                cin>>a[i][j];
                l.push_back(a[i][j]);
                mp[i+1][a[i][j]]=j;
                b[i][j]=0;
            }
            sort(l.begin(),l.end());
            v.push_back(l);
        }
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         cout<<b[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        int ans=0;
        for(int i=0;i<n;i++){
            map<ll,int> ml;
            for(int j=0;j<m;j++){
                for(int k=0;k<m;k++){
                    if(k!=mp[i+1][v[i][j]]){
                        if(a[i][k]==v[i][j]){
                            // cout<<v[i][j]<<" "<<a[i][k]<<" in 1"<<endl;
                            ml[a[i][k]]=k;
                        }
                        else if(b[i][k]){
                            // cout<<v[i][j]<<" "<<a[i][k]<<" in 2"<<endl;
                            ans++;
                        }
                        // else{
                        //     // cout<<v[i][j]<<" "<<a[i][k]<<" in 3"<<endl;
                        // }
                    }
                    else{
                        // cout<<v[i][j]<<" "<<a[i][k]<<" in 4"<<endl;
                        b[i][k]=1;
                        mp[i+1][v[i][j]]=ml[v[i][j]];
                        break;
                    }
                }
            }
        }
        cout<<ans<<endl;

        //   1 3 3 3 3 3 1 1 3
        //   1 3 1 1 3 3 1 1 3


        // for(int i=0;i<m;i++){
        //     for(int j=0;j<m;j++){
        //         if(j!=mp[v[i]]){
        //             if(a[j]==v[i]){
        //                 ml[v[i]]=j;
        //             }
        //             else if(b[j]){
        //                 ans++;
        //             }
        //         }
        //         else{
        //             b[j]=1;
        //             mp[v[i]]=ml[v[i]];
        //             break;
        //         }
        //     }
        // }
        // cout<<ans<<endl;
   }

  return 0;
}