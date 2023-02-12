#include<bits/stdc++.h>
using namespace std;
int gcd(int x,int y){
    if(y==0){
        return x;
    }
    return gcd(y,x%y);
}

int main(){

   int  t; cin>>t;
   while(t--){
     int n; cin>>n;
     int a[n];
     for(int i=0;i<n;i++){
        cin>>a[i];
     }
     int mn=*min_element(a,a+n);
     set<int> s;
     for(int i=0;i<n;i++){
        if(a[i]!=mn){
            s.insert(a[i]-mn);
        }
     }

     bool flag=true;
     set<int> :: iterator it=s.begin();
     int g=*it;
     for(auto x: s){
        g=gcd(g,x);
     }
     (s.size()!=0)? cout<<g<<endl:cout<<-1<<endl;
   }


  return 0;
}