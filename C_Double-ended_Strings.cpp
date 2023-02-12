#include<iostream>
using namespace std;

void solve(string a,string b){
    int ans=0;
    for(int i=0;i<a.size();i++){
        for(int j=0;j<b.size();j++){
            int k=0;
            while((i+k)<a.size() && (j+k)<b.size() && a[i+k]==b[j+k]){
                k++;
            }
            ans=max(ans,k);
        }
    }
    cout<<a.size()+b.size()+2*ans<<endl;
}

int main(){

   int t; cin>>t;
   while(t--){
     string a,b; cin>>a>>b;
     solve(a,b);
   }

  return 0;
}

0 1 1 0 
1 0 0 1
1 0 1 0 

101010
010110
101001
110001
101101
110010
110001



// #include <bits/stdc++.h>

// using namespace std;

// int min_ops(string a, string b) {
//     int m = a.length(), n = b.length();
//     int dp[m+1][n+1];

//     for (int i = 0; i <= m; i++) {
//         for (int j = 0; j <= n; j++) {
//             if (i == 0) {
//                 dp[i][j] = j;
//             } else if (j == 0) {
//                 dp[i][j] = i;
//             } else if (a[i-1] == b[j-1]) {
//                 dp[i][j] = dp[i-1][j-1];
//             } else {
//                 dp[i][j] = min(dp[i-1][j], min(dp[i][j-1], dp[i-1][j-1])) + 1;
//             }
//         }
//     }

//     return dp[m][n];
// }

// int main() {
//     int t; cin>>t;
//     while(t--){
//     string a;
//     string b;
//     cin>>a>>b;
//     cout << min_ops(a, b) << endl;}
//     return 0;
// }
