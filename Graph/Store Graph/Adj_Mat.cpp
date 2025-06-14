// Store  graph in adj. matrix 

#include<bits/stdc++.h>
using namespace std ; 

int main(){
    int n , m ; 

    cout<<"Enter number of nodes : ";
    cin>>n ;
    cout<<"Enter number of edges : ";
    cin>>m ; 

    int graph[n + 1][m + 1];

    for(int i = 0 ; i < m ; i++){
        int u , v ; 
        cout<<"Entersection point for graph : ";
        cin>>u>>v ;
        graph[u][v] = 1 ; 
        graph[v][u] = 1 ;
    }

    return 0 ;
}