#include<bits/stdc++.h>
using namespace std;

void make_heap(int a[],int n, int i){
    int l=i*2;
    int r=i*2+1;
    int largest=i;
    if(l<n && a[largest]<a[l]){
        largest=l;
    }
    if(r<n && a[largest]<a[r]){
        largest=r;
    }

    if(largest!=i){
        swap(a[largest],a[i]);
        make_heap(a,n,largest);
    }
}

void heap_delete(int a[],int& n){
    a[0]=a[n-1];
    n-=1;
    make_heap(a,n,0);
}

void print_heap(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}


int main(){
   
   int n=5;
   int a[]={10, 5, 3, 2, 4};
   heap_delete(a,n);
   print_heap(a,n);



  return 0;
}