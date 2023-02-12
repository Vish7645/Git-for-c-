#include<bits/stdc++.h>
using namespace std;

void swap(vector<int> &v,int parent,int i){
    int temp=v[parent];
    v[parent]=v[i];
    v[i]=temp;
}

void insert(vector<int> &v, int n){
    int i=n+1;
    n+=1;
    while(i>1){
        int parent =i/2;
        if(v[parent]<(v[i])){
            swap(v,parent,i);
            i=parent;
        }
        else{
            return;
        }
    }
}

void del(vector<int> &v,int n){
    v[1]=v[n];
    n-=1;
    int i=1;
    while(i<n){
        int left=v[i*2];
        int right=v[i*2+1];
        int large= left>right ? 2*i:2*i+1;
        if(v[large]>v[i]){
            swap(v,large,i);
            i=large;
        }
        else{
            return;
        }
    }
}

int main(){

   int A[]={23,56,90,89,34,67,32,57,45};
   vector<int> v(10,0);
   v[1]=23;
   for(int i=1;i<9;i++){
      v[i+1]=A[i];
      insert(v,i);
   }
   for(int i=1;i<=9;i++){
      cout<<v[i]<<" ";
   }
   cout<<endl;
   int x=9;
   del(v,x);
   for(int i=1;i<=8;i++){
      cout<<v[i]<<" ";
   }


  return 0;
}