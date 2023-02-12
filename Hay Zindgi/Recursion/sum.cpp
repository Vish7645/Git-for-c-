#include <bits/stdc++.h>
using namespace std;
#include <vector>

int sum(int n,int arr[]){
    if(n<0) return 0;
    return sum(n-1,arr)+arr[n];
}

int digitSum(int n){
   if(n==0) return 0;
    return  digitSum(n/10)+n%10;
}

vector<string> valid;

int parenthesismatching(string &s,int open,int cloce){

   if(open==0 && close==0)
   {
      valid.push_back(s); 
      return;
   }
   if(open>0){
      s.push_back('(');
      parenthesismatching(s,open-1,close);
      s.pop_back;
   }

   if(close>0)
   {
      if(open<close){
         s.push_back(')');
         parenthesismatching(s,open,close-1);
         s.pop_back()      
      }
   }
}

int main(){

   // int n; cin>>n;
   // int arr[n];
   // for(int i=0;i<n;i++)
   // {
   //    cin>>arr[i];
   // }
   // cout<<sum(n-1,arr)<<endl;

   int n; cin>>n;
   cout<<digitSum(n)<<endl;
   


  return 0;
}