    // Undirected Graph Cycle

    // Given an undirected graph with V vertices and E edges, represented as a 2D vector edges[][], where each entry edges[i] = [u, v] denotes an edge between vertices u and v, determine whether the graph contains a cycle or not.

    // Examples:

    // Input: V = 4, E = 4, edges[][] = [[0, 1], [0, 2], [1, 2], [2, 3]]
    // Output: true
    // Explanation: 
    
    // 1 -> 2 -> 0 -> 1 is a cycle.
    // Input: V = 4, E = 3, edges[][] = [[0, 1], [1, 2], [2, 3]]
    // Output: false




#include<bits/stdc++.h>
using namespace std ; 

class Solution {
private: 
    bool detect(int node, vector<int>& vis, vector<vector<int>>& adj) {
        vis[node] = 1;
        queue<pair<int, int>> q;
        q.push({node, -1}); 

        while (!q.empty()) {
            int ver = q.front().first;
            int parent = q.front().second;
            q.pop();

            for (auto it : adj[ver]) {
                if (!vis[it]) {
                    vis[it] = 1;
                    q.push({it, ver});
                }
                else if (it != parent) {
                    return true;
                }
            }
        }
        return false;
    }

public:
    bool isCycle(int V, vector<vector<int>>& edges) {
        vector<int> vis(V, 0);
        vector<vector<int>> adj(V);  

        for (int i = 0; i < edges.size(); i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u); 
        }

        for (int i = 0; i < V; i++) {
            if (!vis[i]) {
                if (detect(i, vis, adj)) return true;
            }
        }
        return false;
    }
};

int main(){

    int V = 4 ; 
    vector<vector<int>> edges = {{0, 1}, {1, 2}, {2, 3}};

    Solution obj ;

    cout<<"Cycle is found or not : "<<obj.isCycle(V , edges);

    return 0 ;
}