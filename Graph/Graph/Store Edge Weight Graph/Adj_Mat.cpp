// Weighted Graph 

#include<bits/stdc++.h>
using namespace std ; 

int main(){
    int n , m ; 

    cout<<"Enter number of nodes : ";
    cin>>n ;
    cout<<"Enter number of edges : ";
    cin>>m ; 

    int graph[n + 1][m + 1];

    // Initialize all thing is zeros 

    for(int i = 0 ; i < n; i++){
        for(int j = 0 ; j < m ; j++){
            graph[i][j] = 0;
        }
    }


    for(int i = 0 ; i < m ; i++){
        int u , v , EW; 
        cout<<"Entersection point for graph : ";
        cin>>u>>v ;
        cout<<"Enter edge weight : ";
        cin>>EW ;
        graph[u][v] = EW ; 
        graph[v][u] = EW ;
    }

    // Print graph 

    for(int i = 0 ; i < n; i++){
        for(int j = 0 ; j < m ; j++){
            cout<<graph[i][j]<<" ";
        }
        cout<<endl ;
    }

    return 0 ;
}