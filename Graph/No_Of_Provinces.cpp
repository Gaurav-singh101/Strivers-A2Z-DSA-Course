#include<bits/stdc++.h>
using namespace std; 

class solutionDFS{
    private: 
    void helperDFS(int ind , vector<int> adj[] , vector<int> &vis , vector<int> &Result){
        vis[ind] = 1 ; 
        Result.push_back(ind);

        for(auto it : adj[ind]){
            if(!vis[it]){
                helperDFS(it , adj , vis , Result);
            }
        }
    }

    vector<int> DFS(vector<int> adj[] , int v , int startingIND , vector<int> &vis){
        vector<int> Result ; 
        helperDFS(startingIND , adj , vis , Result );
        return Result ;
    }

    public:

    int Provinces(int v , vector<int> adj[]){
        int count = 0;
        vector<int> vis(v + 1, 0);
        for(int i = 1 ; i < vis.size() ; i++){
            if(vis[i] == 0){
                count++ ;
                DFS(adj , v , i , vis);
            }
        }
        return count ;
    }
};



int main(){

    int v , e ;
    cout<<"Enter number of vertex  :";
    cin>>v ;
    cout<<"Enter number of edges : ";
    cin>>e ;

    vector<int> adj[v + 1];

    for(int i = 0 ; i < e ; i++){
        int u , v ; 
        cout<<"Enter intersection point : ";
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    cout<<"Adj. List - "<<endl; 
    for(int i = 1 ; i < v ; i++){
        cout<<"Nodelist "<< i<<" :-  ";
        for(int j = 0; j < adj[i].size() ; j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
    solutionDFS obj ;
    int Provinces = obj.Provinces(v , adj);
    cout<<"Number of provinces : "<<Provinces ;

    return 0 ;
}