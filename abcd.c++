#include<bits/stdC++.h>
using namespace std;

class graph{
    public:
    void BFS(int v,unordered_map<int,int<list>> m){ 
        vector<int> ans;
        vector<int> visited(v+1,0);
        for(int i=0;i<v;i++){
            if(!visited[i]){
                queue<int> q;
                q.push(i);
                visited[i]=1;
                while(!q.empty()){
                   int node=q.front();
                   q.pop();
                   ans.push_back(node);
                   for(auto x: m[node]){
                     if(!visited[x]){
                        q.push(x);
                        visited[x]=1;
                     }
                   }
                }
            }
        }
        return ans;
    }

    void DFS(int v,unordered_map<int,list<int>> mp){
        vector<int> store;
        vector<int> visited(v+1,0);
        for(int i=0;i<v;i++){
            if(!visited[i]){
                bfs(i,mp,store,visited);
            }
        }
    }

    void bfs(int node,unordered_map<int,list<int>> mp,vector<int>& store, vector<int>& visited){
        visited[node]=1;
        store.push_back(node);
        for(auto x: mp[node]){
            if(!visited[x]){
                bsf(x,mp,store,visited);
            }
        }
    }

    void add_adge(int n,int m,unordered_map<int,list<int>>& mp,bool flag){
        mp[n].push_back(m);
        if(!flag){
            mp[m].push_back(n);
        }
    }
}

void insert_heap(vector<int>& v,int &n; int key){
    v.push_back(key);
    int i=n;
    n+=1;
    while(i>0){
        int parent=i/2;
        if(a[parent]<a[i]){
            swap(a[parent],a[i]);
            i=parent;
        }
    }
}

void form_heap(int a[],int n,int i){
    int largest=i;
    int l=i*2;
    int r=i*2+1;
    if(l<n && a[largest]<a[l]){
        largest=l
    }
    if(r<n && a[largest]<a[r]){
        largest=r
    }
    if(largest!=i){
        swap(a[largest],a[i]);
        form_heap(a,n,largest);
    }
}

void del_heap(int a[],int& n){
    int a[0]=a[n-1];
    n-=1;
    form_heap(a,n,0);
}



int main(){

   int n=5;
   int a[]={10, 5, 3, 2, 4};
   del_heap(a,n);
   vector<int> v={10, 5, 3, 2, 4};
   int key=15;
   insert_heap(v,n,key);






  return 0;
}