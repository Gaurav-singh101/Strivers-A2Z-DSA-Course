#include<bits/stdc++.h>
using namespace std ; 

int cherryPickup(vector<vector<int>>& grid , int i , int j1 , int j2) {
    int row = grid.size() ;
    int col = grid[0].size();
    if(j1 < 0 || j2 < 0 || j1 > col || j2 > col){
        return -1e8 ; 
    }

    if(i == row - 1){
        if(j1 == j2){
            return grid[i][j1];
        }else{
            return grid[i][j1] + grid[i][j2] ;
        }
    }

    int maxi = 0 ;

    for(int dj1 = -1 ; dj1 <= 1 ; dj1++){
        for(int dj2 = -1 ; dj2 <= 1 ; dj2++){
            if(j1 == j2){
                maxi = max(maxi , grid[i][j1] + cherryPickup(grid , i+1 , j1 + dj1 , j2 + dj2));
            }else{
                maxi = max(maxi , grid[i][j1] + grid[i][j2]   + cherryPickup(grid , i+1 , j1 + dj1 , j2 + dj2));
            }
        }
    }
        return maxi ;
}

int main(){

    vector<vector<int>> arr = {{3,1,1} , {2,5,1} , {1,5,5} , {2,1,1}};
    int col = arr[0].size();
    cout<<"maximum number of cherries collection using both robots  : "<<cherryPickup(arr , 0 , 0 , col-1) ;

   return 0 ; 
}