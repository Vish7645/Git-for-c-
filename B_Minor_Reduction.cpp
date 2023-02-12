#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

   // int t; cin>>t;
   // while(t--){
   //    string s; cin>>s;
   //    int ans=s[0]-'0'+s[1]-'0';
   //    int pos=0;
   //    for(ll i=s.size()-1;i>0;i--){
   //      if(s[i]-'0'+s[i-1]-'0'>9){
   //          pos=i-1;
   //          break;
   //      }
   //    }
      
   //    for(int i=0;i<s.size();i++){
   //        if(i==pos){
   //           int c=s[i]+s[i+1]-'0'-'0';
   //           if(c<10){
   //              cout<<c;
   //              i++;
   //           }
   //           else{
   //              cout<<c/10<<c%10;
   //              i++;
   //           }
   //        }
   //        else{
   //          cout<<s[i];
   //        }
   //    }
   //    cout<<endl;
   // }

int n; cin>>n;
int a[n];
for(int i=0;i<n;i++){
   cin>>a[i];
}
int mn=*min_element(a,a+n);
int l=find(a,a+n,mn)-a;
int mx1=find(a,a+l,(*max_element(a,a+l)))-a;
int mx2=find(a+l,a+n,(*max_element(a+l,a+n)))-a;
// cout<<l<<" "<<mx1<<" "<<mx2<<endl;

int ans=0;
int x=mx1,y=mx1;
while(x>=0 || y<l){
   cout<<x<<" "<<y<<endl;
   if(x==0 && y<l){
      
   }
   else if(a[x-1]>a[y+1] && a[x+1]!=a[x]){
      a[x]-=(a[x]-a[x-1]);
      x--;
      ans++;
   }
   else if(a[x-1]<a[y+1] && a[y+1]!=a[x]){
      a[y]-=(a[y]-a[y+1]);
      y++;
      ans++;
   }
   else{
      x--;
      y++;
   }
}  // 4 6 8 3 1
cout<<ans + a[l]<<endl;


// int a[5]={5,4,9,1,6};
// int l=find(a,a+5,*max_element(a,a+5))-a;
// cout<<l<<endl;








  return 0;
}