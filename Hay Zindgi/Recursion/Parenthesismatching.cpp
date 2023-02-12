#include<iostream>
using namespace std;
#include <vector>
#include <string>

vector<string> v;

// void parenthesismatching(string &s,int open,int close){

//    if(open==0 && close==0)
//    {
//       valid.push_back(s); 
//       return;
//    }
//    if(open>0){
//       s.push_back('(');
//       parenthesismatching(s,open-1,close);
//       s.pop_back();
//    }

//    if(close>0)
//    {
//       if(open<close){
//          s.push_back(')');
//          parenthesismatching(s,open,close-1);
//          s.pop_back();      
//       }
//    }
// }

void parent(string& s,int l,int r){
   if(l==0 && r==0){
      v.push_back(s);
      return;
   }

   if(l>0){
      s.push_back('(');
      parent(s,l-1,r);
      s.pop_back();
   }

   if(r>0 && l>r){
      s.push_back(')');
      parent(s,l,r-1);
      s.pop_back();
   }
}

int main(){

   
   


  return 0;
}