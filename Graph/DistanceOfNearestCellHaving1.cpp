    // Distance of nearest cell having 1
    // Given a binary grid of n*m. Find the distance of the nearest 1 in the grid for each cell.
    // The distance is calculated as |i1  - i2| + |j1 - j2|, where i1, j1 are the row number and column number of the current cell, and i2, j2 are the row number and column number of the nearest cell having value 1. There should be atleast one 1 in the grid.

    // Examples

    // Input: 
    // grid = [[0,1,1,0], [1,1,0,0], [0,0,1,1]]
    // Output: 
    // [[1,0,0,1], [0,0,1,1], [1,1,0,0]]
    // Explanation: 
    // The grid is-
    // 0 1 1 0 
    // 1 1 0 0 
    // 0 0 1 1 
    // - 0's at (0,0), (0,3), (1,2), (1,3), (2,0) and (2,1) are at a distance of 1 from 1's at (0,1), (0,2), (0,2), (2,3), (1,0) and (1,1) respectively.



#include<bits/stdc++.h>
using namespace std ; 

class Solution {
  public:
    vector<vector<int>>bfs(vector<vector<int>>& grid , vector<vector<int>>& ans , vector<vector<int>>& vis , queue<pair<pair<int , int> , int>> q){
        int n = grid.size();
        int m = grid[0].size();
        int delRow[] = {0 , 1 , 0 , -1};
        int delCol[] = {-1 , 0 , 1 , 0};
        
        while(!q.empty()){
            int r = q.front().first.first ; 
            int c = q.front().first.second ;
            int near = q.front().second ;
            ans[r][c] = near ; 
            q.pop();
            
            for(int i = 0 ; i < 4 ; i++){
                int Nr = r + delRow[i];
                int Nc = c + delCol[i];
                if(Nr >= 0 && Nr < n && Nc >= 0 && Nc < m && vis[Nr][Nc] == 0){
                    q.push({{Nr , Nc} , near + 1});
                    vis[Nr][Nc] = 1 ;
                }
            }
        }
        return ans ;
    }
    
    vector<vector<int>> nearest(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> ans(n , vector<int>(m , 0));
        vector<vector<int>> vis(n , vector<int>(m , 0));
        
        queue<pair<pair<int , int> , int>> q ; 
        
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(grid[i][j] == 1){
                    q.push({{i , j} , 0});
                    vis[i][j] = 1; 
                }
            }
        }
        
        return bfs(grid , ans , vis , q);
    }
};


int main(){

    vector<vector<int>> grid = {{0,1,1,0}, {1,1,0,0}, {0,0,1,1}} ;

    Solution obj ; 

    vector<vector<int>> ans = obj.nearest(grid);

    for(auto it : ans){
        cout<<"[ ";
        for(auto i : it){
            cout<<i<<" ";
        }
        cout<<"]"<<endl ;
    }


    return 0 ;
}