#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(int a[],int n){
    int high=n-1;
    int low=0;
    while(a[high]>=a[low]){
        int mid=(high+low)/2;
        int pre=(mid+n-1)%n,next=(mid+1)%n;
        if(a[pre]>a[mid] && a[next]>a[mid]){
            cout<<mid<<endl;
            return;
        }
        else if(a[low]<=a[mid]){
            low=mid+1;
        }
        else if(a[high]>=a[mid]){
            high=mid-1;
        }
    }
}

int main(){

   // to find no of rotation is done in sorted array
   // Like if array is 1 2 3 4 5 6 7
   // If rotation is done 3 time then array will be 5 6 7 1 2 3 4

   int arr[]={1,2,3,4,5,6,7,8};
   solve(arr,7);
   

return 0;
}