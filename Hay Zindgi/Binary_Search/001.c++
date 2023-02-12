#include <bits/stdc++.h>
using namespace std;
#define ll long long

int first(int a[],int n,int b){
    int l=0,h=n-1;
    int mid=(l+h)/2;
    int result=-1;
    while(l<=h){
        if(b==a[mid]){
            result=mid;
            h=mid-1;
        }
        else if(b>a[mid]){
            l=mid+1;
        }
        else{
            h=mid-1;
        }
    }
    return result;
}

int main(){
      
   // Given a array find first and last occurance of an element

   int a[]={3,5,6,9,5,2,8,2};
   cout<<first(a,8,5)<<endl;

return 0;
}