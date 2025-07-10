    // 994. Rotting Oranges

    // You are given an m x n grid where each cell can have one of three values:

    // 0 representing an empty cell,
    // 1 representing a fresh orange, or
    // 2 representing a rotten orange.
    // Every minute, any fresh orange that is 4-directionally adjacent to a rotten orange becomes rotten.

    // Return the minimum number of minutes that must elapse until no cell has a fresh orange. If this is impossible, return -1.

    

    // Example 1:


    // Input: grid = [[2,1,1],[1,1,0],[0,1,1]]
    // Output: 4





#include<bits/stdc++.h>
using namespace std ; 

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        queue<pair<pair<int , int> , int>> q;  

        int fresh = 0 ;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(grid[i][j] == 2){
                    q.push({{i , j} , 0});
                    vis[i][j] = 2 ;
                }else if (grid[i][j] == 1){
                    fresh++;
                }
            }
        }

        int rotted = 0 ;
        int tm = 0 ; 
        vector<int>dRow = {-1 , 0 , 1 , 0};
        vector<int>dCol = {0 , 1 , 0 , -1};

        while(!q.empty()){
            int r = q.front().first.first ; 
            int c = q.front().first.second ; 
            int t = q.front().second ; 
            tm = max(t , tm);
            q.pop();

            for(int i = 0 ; i < 4 ; i++){
                int Nr = r + dRow[i];
                int Nc = c + dCol[i];
                if(Nr >= 0 && Nr < n && Nc >= 0 && Nc < m && grid[Nr][Nc] == 1 && vis[Nr][Nc] != 2){
                    q.push({{Nr , Nc} , t + 1});
                    vis[Nr][Nc] = 2 ;
                    rotted++ ;
                }
            }   
        }
        return (rotted == fresh) ? tm : -1;
    }
};

int main(){

    vector<vector<int>> grid = {{2,1,1},{1,1,0},{0,1,1}} ;

    Solution obj ;

    cout<<"Time taken to all oranges Rotted : "<<obj.orangesRotting(grid);


    return 0 ;
}