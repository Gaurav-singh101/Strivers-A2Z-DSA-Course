//////////////////////   Normal Solution //////////////////

// #include <bits/stdc++.h>
// using namespace std; 

// int uniquePathsWithObstacles(vector<vector<int>>& ob, int row, int col) {
//     if (row >= 0 && col >= 0 && ob[row][col] == 1) return 0; 
//     if (row == 0 && col == 0) return 1;
//     if (row < 0 || col < 0) return 0;

//     int up = uniquePathsWithObstacles(ob, row - 1, col);
//     int left = uniquePathsWithObstacles(ob, row, col - 1);
    
//     return up + left;
// }

// int main() {
//     vector<vector<int>> obstacleGrid = {{0,0,0},{0,1,0},{0,0,0}};
//     int row = obstacleGrid.size();
//     int col = obstacleGrid[0].size();
    
//     cout << uniquePathsWithObstacles(obstacleGrid, row - 1, col - 1);

//     return 0;
// }



// ///////////////////////  Memoization  /////////////////////




#include <bits/stdc++.h>
using namespace std; 

int uniquePathsWithObstacles(vector<vector<int>>& ob, int row, int col , vector<vector<int>>& dp) {
    if (row >= 0 && col >= 0 && ob[row][col] == 1) return 0; 
    if (row == 0 && col == 0) return 1;
    if (row < 0 || col < 0) return 0;

    if(dp[row][col] != -1)return dp[row][col] ;

    int up = uniquePathsWithObstacles(ob, row - 1, col , dp);
    int left = uniquePathsWithObstacles(ob, row, col - 1 , dp);
    
    return dp[row][col] = up + left;
}

int main() {
    vector<vector<int>> obstacleGrid = {{0,0,0},{0,1,0},{0,0,0}};
    int row = obstacleGrid.size();
    int col = obstacleGrid[0].size();

    vector<vector<int>> dp(row + 1, vector<int>(col + 1, -1)) ;

    
    cout << uniquePathsWithObstacles(obstacleGrid, row - 1, col - 1 , dp);

    return 0;
}



/////////////////////////  Tabulation   /////////////////////




// #include <bits/stdc++.h>
// using namespace std; 

// int uniquePathsWithObstacles(vector<vector<int>>& ob, int row, int col) {
//     int dp[row][col];
//     for(int i = 0 ; i < row ; i++){
//         for(int j = 0 ; j < col ; j++){
//             if(ob[i][j] == -1) dp[i][j] = 0;
//             else if(i == 0 && j == 0) dp[i][j] = 1 ;
//             else{
//                 int up = 0 , left = 0 ; 
//                 if(i > 0 ) up = dp[i - 1][j] ; 
//                 if(j > 0)  left = dp[i][j - 1];
//                 dp[i][j] = up + left ;
//             }
//         }
//     }
    
//     return dp[row - 1][col - 1];
// }

// int main() {
//     vector<vector<int>> obstacleGrid = {{0,0,0},{0,1,0},{0,0,0}};
//     int row = obstacleGrid.size();
//     int col = obstacleGrid[0].size();

//     cout << uniquePathsWithObstacles(obstacleGrid, row - 1, col - 1);

//     return 0;
// }





/////////////////////  Space optimization  //////////////////


#include <bits/stdc++.h>
using namespace std; 

int uniquePathsWithObstacles(vector<vector<int>>& ob, int row, int col) {
    vector<int> prev(col , 0);
    for(int i = 0 ; i < row ; i++){
        vector<int> temp(col , 0);
        for(int j = 0 ; j < col ; j++){
            if(ob[i][j] == -1) temp[j] = 0;
            else if(i == 0 && j == 0) temp[j] = 1 ;
            else{
                int up = 0 , left = 0 ; 
                if(i > 0 ) up = prev[j] ; 
                if(j > 0)  left = temp[j - 1];
                temp[j] = up + left ;
            }
        }
        prev = temp ;
    }
    
    return prev[row - 1];
}

int main() {
    vector<vector<int>> obstacleGrid = {{0,0,0},{0,1,0},{0,0,0}};
    int row = obstacleGrid.size();
    int col = obstacleGrid[0].size();

    cout << uniquePathsWithObstacles(obstacleGrid, row - 1, col - 1);

    return 0;
}