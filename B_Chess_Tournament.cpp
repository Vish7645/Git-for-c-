#include<bits/stdc++.h>
using namespace std;

int main(){

   int t; cin>>t;
   while(t--){
      int n; cin>>n;
      string s; cin>>s;
      int sum=0;
      int r[n]={};
      vector<int> id;
      for(int i=0;i<n;i++){
         if(s[i]=='2'){
            id.push_back(i);
         }
      }
      int k=id.size();
    //   int b[n][n]={};
      if(k<3 && k!=0){
          cout<<"NO"<<endl;
      }
      else{
        vector<string> t(n,string(n,'='));
        for(int i=0;i<n;i++){
            t[i][i]='X';
        }
        for(int i=0;i<k;i++){
           int x=id[i], y=id[(i+1)%k];
           t[x][y]='+';
           t[y][x]='-';
        }
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++){
            cout<<t[i]<<endl;
        }
      }
    }
                                                                                                  

  return 0;
}