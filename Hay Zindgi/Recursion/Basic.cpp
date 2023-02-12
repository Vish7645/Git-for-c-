#include<bits/stdc++.h>
using namespace std;

        
         // Main rule in recursion 
         
// Define a func
// Then try to write the func in terms of function
// we made base condition to avoid propagation of recursion 

void func(int n){
    if(n==0) return;
    func(n-1);  // here we have to implement to last line
    cout<<n<<" ";
}

int fibo(int n){
  if(n==0) return 0;
  if(n==1) return 1;
    return fibo(n-1)+fibo(n-2);  // here we have return from there no need to implement to last line
}

int fact(int n){
  if(n==0) return 1;
  return fact(n-1)*n;
}

int main(){
 
//    int n; cin>>n;
//    func(n);   

int n; cin>>n;
cout<<fibo(n)<<endl;
// func(n);
cout<<fact(n)<<endl;


  return 0;
}

