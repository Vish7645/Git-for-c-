#include<bits/stdc++.h>
using namespace std;

vector<int> dijkstra(vector<vector<int>> &vec,int vertices,int edge, int source){
    unordered_map<int,list<pair<int,int>>> adj;
    for(int i=0;i<edge;i++){
        int u=vec[i][0];
        int v=vec[i][1];
        int w=vec[i][2];

        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }

    vector<int> dist(vertices);
    for(int i=0;i<n;i++){
        dist[i]=INT_MAX;
    }
    set<pair<int,int>> st;

    dist[source]=0;
    st.insert({0,source});
    while(!st.empty()){
        // Fetch top record
        auto top=*(st.begin());
        int nodeDist=top.first();
        int topNode=top.second();
        
        st.erase(st.begin());
        
        // Traverse on neighbour
        for(auto neighbour: adj[topNode]){
            if(nodeDist+neighbour.second<dist[neighbour.first]){
                auto record=st.find({dist[neighbour.first],neighbour.first});
                if(record!=st.end()){
                    st.erase(record);
                }
                dist[neighbour.first]=nodeDist+neighbour.second;
                st.insert({dist[neighbour.first], neighbour.first});
            }
        }
    }
    return dist;
}


int main(){

   


  return 0;
}