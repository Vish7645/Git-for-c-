#include<bits/stdc++.h>
using namespace std;

class graph{
     public:
     unordered_map<int,list<int>> adj;

     void add_edje(int u,int v,bool flag){
        adj[u].push_back(v);
        if(flag==0){
            adj[v].push_back(u);
        }
     }

     void print_adj(){
        for(auto x:adj){
            cout<<x.first<<" -> ";
            for(auto y:x.second){
                cout<<y<<", ";
            }
            cout<<endl;
        }
     }
};

int main(){

   int n,m; cin>>n>>m;
   graph g;
   for(int i=0;i<m;i++){
      int u,v; cin>>u>>v;
      g.add_edje(u,v,0);   
   }
   
   g.print_adj();

  return 0;
}