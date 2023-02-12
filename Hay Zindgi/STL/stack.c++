#include<bits/stdc++.h>
using namespace std;

int main(){

   stack<string> s;
   s.push("vishal");
   s.push("Arvi");
   s.push("Kishan");
   s.push("Rahul");
   while(!s.empty()){
      cout<<s.top()<<endl;
      s.pop();
   }
   
   cout<<endl;
   queue<string> q;
   q.push("vishal");
   q.push("Arvi");
   q.push("Kishan");
   q.push("Rahul");
   while(!q.empty()){
      cout<<q.front()<<endl;
      q.pop();
   }


  return 0;
}