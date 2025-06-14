#include<bits/stdc++.h>
using namespace std ; 

int main(){
    int n , m ; 
    cout << "Enter number of nodes: ";
    cin >> n ;
    cout << "Enter number of edges: ";
    cin >> m ; 

    vector<pair<int , int>> adj[n + 1];

    for(int i = 0 ; i < m; i++){
        int u , v , x;         
        cout << "Enter intersection points for graph (u v): ";
        cin >> u >> v ;
        cout<<"Edge weight : ";
        cin>>x ;
        adj[u].push_back({v , x});
        adj[v].push_back({u , x});
    }

    // Print the adjacency list
    cout << "Adjacency List Representation of the Weighted Graph:" << endl;
    for (int i = 1; i <= n; ++i) {
        cout << "Node " << i << ": ";
        for (auto it : adj[i]) {
            cout << "(" << it.first << ", weight=" << it.second << ") ";
        }
        cout << endl;
    }



    return 0 ; 
}