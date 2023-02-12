#include<bits/stdc++.h>
using namespace std;

class graph{
    public:
    vector<int> BSF(int v, unordered_map<int,list<int>> adj){
        vector<int> bsf;
        vector<int> visited(v+1,0);

        for(int i=1;i<=v;i++){
            if(!visited[i]){
                queue<int> q;
                q.push(i);
                visited[i]=1;
                while(!q.empty()){
                    int node=q.front();
                    q.pop();
                    bsf.push_back(node);
                    for(auto x: adj[node]){
                        if(!visited[x]){
                            q.push(x);
                            visited[x]=1;
                        }
                    }
                }
            }
        }
        return bsf;
    }

    unordered_map<int,list<int>> adj;
    void add_adge(int n,int m,bool flag,unordered_map<int,list<int>>& adj){
        adj[n].push_back(m);
        if(!flag){
            adj[m].push_back(n);
        }
    }
};

int main(){

   int n,m; cin>>n>>m;
   graph g;
   for(int i=0;i<m;i++){
     int x,y; cin>>x>>y;
     g.add_adge(x,y,0);
   }

//    BSF(n,adj);




  return 0;
}