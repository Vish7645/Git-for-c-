#include<iostream>
using namespace std;

void fun(int a){
    if(a<=0) return;
    cout<<a<<'\n';
    fun(a-1);
}

void fun(int a){
    if(a<=0) return;
    fun(a-1);
    cout<<a<<'\n';
}

int factorial(int a)
{
    if(a==0) return 1;
    return a*factorial(a-1);
}

int fib(int n)
{
    if(n==1 || n==2) return 1;
    return fib(n-1)+fib(n-2);
}

int main(){

   


  return 0;
}