#include<bits/stdc++.h>
using namespace std;
#include<vector>

// Here we simply take copy of vector also it's reference

void crint(vector<int> &v)
{
    // cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void srink(vector<pair<int,int>> v){
  for(int i=0;i<v.size();i++)}
}

int main(){

  // pair<int,string> p={1,"Vishal"};
  // cout<<p.first<<" "<<p.second<<endl;;
  // pair<int,string> &p1=p;  // here we take the address of p so whatever change we do in p1 will also reflect in P
  // p1={2,"Kishal"};

  // cout<<p.first<<" "<<p.second<<endl;
  // // cout<<"Khalass"<<endl;
  // cout<<p1.first<<" "<<p1.second<<endl;

  pair<int,int> p[3];
  
  p[0]={1,2};
  p[1]={2,3};
  p[2]={3,4};
  
  vector<pair<int,int>> v={{1,2},{2,3},{3,4}};
  // v.push_back({5,6});
  // vector<pair<int,int>> &vp=v;
  // v.push_back({4,5});
  // cout<<vp[0].first<<" "<<vp[0].second<<endl;
  // cout<<vp[1].first<<" "<<vp[1].second<<endl;
  // cout<<vp[2].first<<" "<<vp[2].second<<endl;
  // cout<<vp[3].first<<" "<<vp[3].second<<endl;
  
  // cout<<"\n"<<"After swapping "<<endl;
  // swap(v[0],v[2]);
  // for(int i=0;i<4;i++){
  //    cout<<v[i].first<<" "<<v[i].second<<endl;
  // }

vector<int> c(10);  // 10 vector with 0 input
crint(c);
c.push_back(8);
crint(c);

vector<int> k=c;   // here we only take copy of vector change not applied to parent vector
k.push_back(7);    // to pass same vector use &
crint(k);
crint(c);

//   vector<int> k[3];   //Here we 3 vector of 0 size  
//   // // We can call this 2-D vector with dynamic row
//   for(int i=0;i<3;i++){
//       int n;
//       cin>>n;
//       for(int j=0;j<n;j++)
//       {
//           k[i].push_back(j+1);
//       }
//   }
  
//   for(int i=0;i<3;i++)
//   {
//       crint(k[i]);  // It means we pass a vector only 
//   }

  // // To put row and column both dynamic
  
//   vector<vector<int>> h;
//   int N;  // No of column
//   cin>>N;
//   for(int i=0;i<N;i++)
//   {
//       int l; cin>>l;
//       vector<int> temp;
//       for(int j=0;j<l;j++)
//       {
//           temp.push_back(j+1);
//       }
//       h.push_back(temp);
//   }
  
//   for(int i=0;i<N;i++)
//   {
//       crint(h[i]);
//   }
 
   // or

  // vector<vector<int>> v;
  // int m; cin>>m;
  // for(int i=0;i<m;i++){
  //   int n; cin>>n;
  //   vector<int> temp;
  //   for(int i=0;i<n;i++){
  //       temp.push_back(i+1);
  //   }
  //   v.push_back(temp);
  // }

  // for(auto x: v){
  //   for(auto y: x){
  //       cout<<y<<" ";
  //   }
  //   cout<<"\n"<<endl;
  // }

   


  return 0;
}