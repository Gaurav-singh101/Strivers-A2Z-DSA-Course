// Store Undirected Graph using Adj. List 

// #include<bits/stdc++.h>
// using namespace std ; 

// int main(){
//     int n , m ; 
//     cout << "Enter number of nodes: ";
//     cin >> n ;
//     cout << "Enter number of edges: ";
//     cin >> m ; 

//     vector<int> adj[n + 1];

//     for(int i = 0 ; i < m; i++){
//         int u , v ;         
//         cout << "Enter intersection points for graph (u v): ";
//         cin >> u >> v ;
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }

//     // Print the adjacency list
//     cout << "Adjacency List Representation of the Graph:" << endl;
//     for(int i = 1; i <= n; i++) {
//         cout << "Node " << i << ": ";
//         for(int j = 0; j < adj[i].size(); j++) {
//             cout << adj[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0 ; 
// }





// Directed Graph

#include<bits/stdc++.h>
using namespace std ; 

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

    return 0 ; 
}