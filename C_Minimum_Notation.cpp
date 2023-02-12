#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
   string s; cin>>s;
   ll n=s.size();
   map<char,ll> mp;
   multiset<char> c;
   for(ll i=0;i<n;i++){
      mp[s[i]]=i;
   }
   
   int curr=0;
   for(char i='0';i<='9';i++){
      if(mp.find(i)==mp.end()){
         continue;
      }
      else{
         // cout<<curr<<" ";
         for(;curr<=mp[i];curr++){
            if(s[curr]==i || s[curr]=='9'){
               c.insert(s[curr]);
            }
            else{
               c.insert(s[curr]+1);
            }
         }
      }
   }
   // cout<<endl;
   for(auto x: c){
      cout<<x;
   }
   cout<<endl;
}

int main(){

   // int t; cin>>t;
   // while(t--){
   //  //  int n; cin>>n;
   //   string s; cin>>s;
   //   int n=s.size();
   //   vector<int> v;
   //   map<int,int> mp;
   //   for(int i=0;i<n;i++){
   //      v.push_back(s[i]-'0');
   //   }
   //   sort(v.begin(),v.end());
   //   map<int,int> m;
   //   map<int,int> h;
   //   for(int i=0;i<n;i++){
   //     mp[v[i]]++;
   //     m[v[i]]=i;
   //   }
   //   int d=n-1;
   //   for(int i=n-2;i>=0;i--){
   //      if(i>d){
   //       if(s[i]-'0'<s[d]-'0'){
   //          h[d]=1;
   //          d=m[s[i]-'0'];
   //       }
   //       else if(s[i]-'0'>s[d]-'0'){
   //          h[i]=1;
   //       }
   //      }
   //      else{
   //         if(s[i]-'0'>s[i+1]-'0'){
   //           h[s[i]-'0']=1;
   //           d=m[s[i]-'0'];
   //         }
   //      }
   //   }
   //   while(p--){
   //      cout<<mn;
   //   }
   //   for(int i=p;i<n;i++){
   //      if(v[i]!=s[i]-'0'){
   //          cout<<min(v[i]+1,9);
   //      }
   //   }
   //   cout<<endl;
   // }


   int t; cin>>t;
   while(t--){
      solve();
   }

  return 0;
}