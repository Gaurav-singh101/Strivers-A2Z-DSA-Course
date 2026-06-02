/////////////////   Simple Implementation for Adjacency Matrix Representation   ////////////



// #include<bits/stdc++.h>
// using namespace std ; 

// int minkey(vector<int>& key , vector<bool>& mstSet){
//     int minInd ; 
//     int minVal = INT_MAX ; 
//     for(int i = 0 ; i < key.size() ; i++){
//         if(key[i] < minVal && mstSet[i] == false){
//             minInd = i ; 
//             minVal = key[i];
//         }
//     }
//     return minInd ; 
// }

// void printMst(vector<int>& parent , vector<vector<int>>& graph){
//     cout<<"Graph node and value : "<<endl ; 
//     for(int i = 1 ; i < graph.size() ; i++){
//         cout<<parent[i]<<" - "<<i<<"  value - "<<graph[parent[i]][i]<<endl; 
//     }
// }

// void helpForMst(vector<vector<int>>& graph){
//     int V = graph.size();
//     vector<int>parent(V);
//     vector<int>key(V , INT_MAX);
//     vector<bool>mstSet(V , false);

//     parent[0] = -1 ; 
//     key[0] = 0 ; 

//     for(int i = 0 ; i < V - 1 ; i++){
//         int u = minkey(key , mstSet);

//         mstSet[u] = true ; 

//         for(int v = 0 ; v < V ; v++){
//             if(graph[u][v] && mstSet[v] == false && key[v] > graph[u][v]){
//                 parent[v] = u  ;
//                 key[v] = graph[u][v];
//             }
//         }
//     }

//     printMst(parent , graph);
// }

// int main(){

//     vector<vector<int>> graph = { {0 , 5 , 0 , 1 , 0},
//                             {5 , 0 , 4 , 7 , 0},
//                             {0 , 4 , 0 , 0 , 5},
//                             {1 , 7 , 0 , 0 , 3},
//                             {0 , 0 , 5 , 3 , 0} };


//     helpForMst(graph);

//     return 0 ; 
// }










//////////////   Efficient Implementation using Priority Queue and Adjacency List    //////////




#include<bits/stdc++.h>
using namespace std ; 

int spanningTree(int v , vector<vector<int>>adj[]){
    int res = 0 ; 

    priority_queue<pair<int , int> , vector<pair<int , int>> , greater<>> pq ; 
    vector<bool> vis(v , false);

    pq.push({0 , 0});

    while(!pq.empty()){
        auto node = pq.top();
        pq.pop();

        if(vis[node.second]){
            continue;
        }

        vis[node.second] = true ; 
        res += node.first ; 

        for(auto &it : adj[node.second]){
            if(!vis[it[0]]){
                pq.push({it[1] , it[0]});
            }
        }
    }

    return res ;
}

int main(){

    int V = 3 ; 
    vector<vector<int>>adj [V] ;

    adj[0].push_back({1, 5});
    adj[1].push_back({0, 5});

    adj[1].push_back({2, 3});
    adj[2].push_back({1, 3});

    adj[0].push_back({2, 1});
    adj[2].push_back({0, 1});

    cout << spanningTree(V, adj) << endl;

    return 0 ;
}