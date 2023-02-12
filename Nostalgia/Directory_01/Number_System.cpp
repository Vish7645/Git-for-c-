#include<iostream>
using namespace std;

int binexp(int a,int b)
{
    if(b==0)
        return 1;
    int temp=binexp(a,b/2);
    temp=temp*temp;
    if(b%2==1)
    // {
        temp*=a;
    // }
        return temp;
}

int main(){

   cout<<binexp(2,10)<<endl;



  return 0;
}