#include <bits/stdc++.h>
using namespace std;

void insert(vector<int> &a,int &n, int key){
    n+=1;
    a.push_back(key);
    int i=n-1;
    while(i>0){
        int parent=i/2;
        if(a[parent]<a[i]){
            swap(a[parent],a[i]);
            i=parent;
        }
        else{
            return;
        }
    }
}

void insert_print(vector<int> &v,int n){
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}

int main(){

   int n=5;
   vector<int> a={10, 5, 3, 2, 4};
   int key=15;
   insert(a,n,key);
   insert_print(a,n);


  return 0;
}