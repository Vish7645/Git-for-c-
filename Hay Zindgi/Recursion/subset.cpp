#include<bits/stdc++.h>
using namespace std;
#include <vector>
vector<vector<int>> a;

void generate(vector<int> &sub,int i,vector<int> &subset)
{
    if(i==subset.size()){
        a.push_back(sub); 
        return;
    }

    generate(sub,i+1,subset);
    sub.push_back(subset[i]);
    generate(sub,i+1,subset);
    sub.pop_back();
}

int main(){

   int n; cin>>n;
   vector<int> subset;
   for(int i=0;i<n;i++)
   {
      int x; cin>>x;
      subset.push_back(x);
   }
   
   vector<int> emp;
   generate(emp,0,subset);

   for(auto s: a){
    for(auto ele: s)
    {
        cout<<ele<<" ";
    }
    cout<<endl;
   }
   



  return 0;
}