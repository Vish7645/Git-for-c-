#include<bits/stdc++.h>
using namespace std;

class graph{
    void dfs(int node, vector<int>& visited, unordered_map<int,list<int>>& adj, vector<int> storedfs){
        storedfs.push_back(node);
        visited[node]=1;
        for(auto x: adj[node]){
            if(!visited[x]){
                dfs(x,visited,adj,storedfs);
            }
        }
    }

    public: 
    void DFS(int v ,unordered_map<int,list<int>> adj){
        vector<int> storedfs;
        vector<int> visited(v+1,0);

        for(int i=0;i<n;i++){
            if(!visited[i]){
                dfs(i, visited, adj, storedfs);
            }
        }
    }
}

int main(){

   


  return 0;
}