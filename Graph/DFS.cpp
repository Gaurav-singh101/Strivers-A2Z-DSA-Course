#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    void dfs(int startNode, vector<int> adj[], vector<int>& vis, vector<int>& ls) {
        vis[startNode] = 1;
        ls.push_back(startNode);

        for (auto it : adj[startNode]) {
            if (!vis[it]) {
                dfs(it, adj, vis, ls);
            }
        }
    }

public:
    vector<int> DFSOfGraph(int v, vector<int> adj[], int startNode) {
        vector<int> vis(v + 1, 0);  
        vector<int> ls;
        dfs(startNode, adj, vis, ls);
        return ls;
    }
};

int main() {
    int n, m;
    cout << "Enter number of nodes: ";
    cin >> n;
    cout << "Enter number of edges: ";
    cin >> m;

    vector<int> adj[n + 1]; 

    for (int i = 0; i < m; i++) {
        int u, v;
        cout << "Enter intersection points for graph (u v): ";
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    cout << "Adjacency List Representation of the Graph:" << endl;
    for (int i = 1; i <= n; i++) {
        cout << "Node " << i << ": ";
        for (int j = 0; j < adj[i].size(); j++) {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }

    Solution obj;
    vector<int> ans = obj.DFSOfGraph(n, adj, 3);  

    cout << "DFS traversal: ";
    for (auto it : ans) {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}
