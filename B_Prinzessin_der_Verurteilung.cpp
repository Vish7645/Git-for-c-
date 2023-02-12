#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

   int t; cin>>t;
   while(t--){
     int n; cin>>n;
     string s; cin>>s;
     string k;
     bool flag=false;
     int l=INT_MAX;
     for(char c='a';c<='z';c++){
        int count=0;
        for(int i=0;i<n;i++){
            if(s[i]!=c && s[i-1]==c && i!=0){
                cout<<"in 1 "<<i<<endl;
                if(s[i]!='b'){
                    k="ac";
                }
                else{
                    k="ab";
                }
                flag=true;
                if(l>k.size()){
                    l=k.size();
                }
                break;
            }
        }
        if(flag==false){
            k=c;
            break;
        }     
     }
     cout<<k<<endl;
   }


return 0;
}


long long countFairPairs(vector<int>& a, int lower, int upper) {
            long long n = a.size();
            sort(a.begin(),a.end());

            long long r = n - 1, c = 0;
             while (r > 0) {
                auto x
                    = lower_bound(a.begin(), a.end(),
                                  lower - a[r]);

                long long beta = x - a.begin();
                auto y
                    = upper_bound(a.begin(), a.end(),
                                  upper - a[r]);

                --y;

                long long alpha = y - a.begin();
                alpha = min(alpha, r - 1);
                if (alpha - beta >= 0) {
                    c += (alpha - beta + 1);
                }

                r--;
            }
            return c;
        }