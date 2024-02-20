#include<bits/stdc++.h>
#include<vector>
using namespace std;

void dfs(int node, vector<int> adj[], int vis[], vector<int> &list){
    vis[node] = 1;
    list.push_back(node);
    for(auto n: adj[node]){
        if(!vis[n]) dfs(n, adj, vis, list);
    }
}

int main(){
    int V = 5;
    vector<int> adj[5] = {{2,3,1} , {0}, {0,4}, {0}, {2}};
    vector<int> list;
    int vis[V] = {0};
    dfs(0, adj, vis, list);
    for(int item: list) cout<<item<<" ";
    return 0;
}