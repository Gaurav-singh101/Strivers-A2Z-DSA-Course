#include <bits/stdc++.h>
using namespace std;

class Solution{
    private: 
    void helper(int n , int ST , vector<int>adj[] , vector<int>& vis , vector<int>& result){
        result.push_back(ST);
        vis[ST] = 1 ; 

        for(auto it : adj[ST]){
            if(!vis[it]){
                helper(n , it , adj , vis , result);
            }
        }
    }

    public: 
    vector<int>dfs(int n , int ST , vector<int>adj[]){
        vector<int> result ;
        vector<int> vis(n + 1 , 0);
        helper(n , ST , adj , vis , result);
        return result ;
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
    vector<int> ans = obj.dfs(n, 3 , adj);  

    cout << "DFS traversal: ";
    for (auto it : ans) {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}
