#include<bits/stdc++.h>
using namespace std;
vector<int> bfsTraversal(int V, vector<vector<int>> ad){
    int vis[V] = {0};
    vis[0] = 1;
    vector<int> bfs;
    queue<int> q;
    q.push(0);
    while(!q.empty()){
        int node = q.front();
        q.pop();
        bfs.push_back(node);
        for(auto it: ad[node]){
            if(vis[it] != 1) {
                vis[it] = 1;
                q.push(it);
            }
        }
    }
    return bfs;
}

int main(){
    vector<vector<int>> ad = {{2,3,4}, {1,3,4}, {1,2,4}, {1,2,3}};
    int V = 4;
    vector<int> bfs_traversal = bfsTraversal(V, ad);
    for(auto x: bfs_traversal) cout<<x<<" ";
    return 0;
}