#include<bits/stdc++.h>
using namespace std;

void findpower(int num){
    int sum=0;
    while(num>0){
        if((num&1)==1){
            cout<<"Max power of 2 : "<<sum<<endl;
            return;
        }
        sum++;
        num>>=1;
    }
}

void findsetbit(int n){
    int sum=0;
    while(n>0){
        if((n&1)==1){
            sum++;
        }
        n>>=1;
    }
    cout<<"Set bit : "<<sum<<endl;
}

int main(){

   int n; cin>>n;
   findpower(n);
   findsetbit(n);




  return 0;
}