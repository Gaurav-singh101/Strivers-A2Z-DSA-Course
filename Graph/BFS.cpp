#include<bits/stdc++.h>
using namespace std ; 

class Solution{
    public : 
    vector<int> bfsOfGraph(int v , vector<int> adj[] , int startNode){
        int vis[v + 1] = {0};
        vis[startNode] = 1 ; 
        queue<int> q; 
        q.push(startNode);
        vector<int>bfs;
        while(!q.empty()){
            int node = q.front() ; 
            q.pop();
            bfs.push_back(node);

            for(auto it : adj[node]){
                if(!vis[it]){
                    vis[it] = 1;
                    q.push(it);
                }
            }
        }
        return bfs ; 
    }
};

int main(){
    int n , m ; 
    cout << "Enter number of nodes: ";
    cin >> n ;
    cout << "Enter number of edges: ";
    cin >> m ; 

    vector<int> adj[n + 1];

    for(int i = 0 ; i < m; i++){
        int u , v ;         
        cout << "Enter intersection points for graph (u v): ";
        cin >> u >> v ;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // Print the adjacency list
    cout << "Adjacency List Representation of the Graph:" << endl;
    for(int i = 1; i <= n; i++) {
        cout << "Node " << i << ": ";
        for(int j = 0; j < adj[i].size(); j++) {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }


    Solution obj ;
    vector<int> ans = obj.bfsOfGraph(n , adj , 3);

    cout<<"BFS traversal : ";
    for(auto it : ans){
        cout<<it<<" , ";
    }

    return 0 ; 
}