#include<bits/stdc++.h>
using namespace std;

int main(){

//1 ->   // In set we can copy 1 set in another like
   set<int> s;
   s.insert(2);
   s.insert(5);
   s.insert(4);
   s.insert(6);
   s.insert(7);
   s.insert(9);
   for(auto x: s){
      cout<<x<<" ";
   }
   cout<<endl<<"\n";

   set<int> a;
   a.insert(1);
   a.insert(8);
   for(auto x: a){
      cout<<x<<" ";
   }
   cout<<endl;
   // TO copy in a 
   a.insert(s.begin(),s.end());  // Or from desire index  a.insert(s.find(3),s.end());
   for(auto x: a){
      cout<<x<<" ";
   }
   cout<<endl;


// 2 -> Making array of set like

   set<int> c[4];
   int num=1;
   for(int i=0;i<4;i++){
      for(int j=0;j<5;j++){
         c[i].insert(num);
         num++;
      }
   }
   for(int i=0;i<4;i++){
       for(auto x:c[i]){
          cout<<x<<" ";
       }
       cout<<"\n";
   }

// 3 -> Find in set   O(log(N))

  auto it=s.find(6);
  if(it!=s.end()){
    cout<<"Present"<<endl;
  }
  else{
    cout<<"Not-Present"<<endl;
  }

// 4 -> For erase

// s.erase(it)  ? it==iterator O(1) : O(log(N)); N -> is size of array
// s.erase(s.find(n));  === O(log(N))


// if s.erase by range s.erase(it,s.end()) --> No of element bwn it and end()

  auto l=s.erase(4);
  for(auto x:s){
     cout<<x<<" ";
  }
  
//    s.size() -> O(1);
//   s.empty() -> O(1);
//   s.count(a) -> O(log(N))
  return 0;
}