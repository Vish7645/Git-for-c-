#include<bits/stdc++.h>
using namespace std;

int main(){

//    operation in string  like substrcting
   string s="4767322387";
   string f;
   for(char x:s){
       f+=char('9'-x+'0');
   }
   cout<<f<<endl;  //5232677612

   // increaing in no 
   f[6]+=1;
   cout<<f<<endl;

  return 0;
}