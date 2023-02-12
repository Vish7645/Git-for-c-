#include<bits/stdc++.h>
using namespace std;

int main(){

    // int a[]={1,2,3,4,5};
    // for(auto x: a){
    //     cout<<x<<" ";
    // }
    // cout<<"\n\n";




    // int b[9];
    // for(auto x: b){
    //      cout<<x<<" ";
    // }
    // cout<<"\n\n";



    // int c[9]={};
    // for(auto x: c){
    //      cout<<x<<" ";
    // }
    // cout<<"\n\n";



    // int d[9]={3};
    // for(auto x: d){
    //      cout<<x<<" ";
    // }
    // cout<<"\n\n";




    // vector<int> v(9);
    // for(auto x: v){
    //     cout<<x<<" ";
    // }
    // cout<<"\n\n";

    // vector<int> l(9,1);
    // for(auto x: l){
    //     cout<<x<<" ";
    // }
    // cout<<"\n\n";




   vector<pair<int,int>> v_p={{1,2},{2,3},{3,4},{4,5},{5,6}};
   auto it=v_p.begin();
   for(it;it!=v_p.end();it++){
      cout<<it->first<<" "<<it->second<<endl;
   }

   
   cout<<"\n";
   for(auto x: v_p){
       cout<<x.first<<" "<<x.second<<endl;
   }
   
   cout<<"\n";

//            //Pair
   pair<int,int> p={2,3};
   cout<<p.first<<" "<<p.second<<endl;
   cout<<"\n";

//           // Pair in array
   pair<int,string> i_s[]={{1,"Hallo"},{2,"How are you"},{3,"How to do"}};
   for(auto p:i_s){
      cout<<p.first<<" "<<p.second<<endl;
   }
   cout<<"\n";


  return 0;
}