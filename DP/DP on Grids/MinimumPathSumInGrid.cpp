// ////////////////   Memoization Method //////////////////

// #include<bits/stdc++.h>
// using namespace std ; 

// int fun(vector<vector<int>>& arr , int n , int m , vector<vector<int>>& dp){
//     if(n == 0 && m == 0)return arr[0][0] ; 
//     if(n < 0 || m < 0)return INT_MAX  - 500 ; 

//     if(dp[n][m] != -1)return dp[n][m] ; 

//     int up = arr[n][m] + fun(arr , n - 1 , m , dp);
//     int left = arr[n][m] + fun(arr , n , m - 1 , dp);

//     return dp[n][m] = min(up , left);
// }

// int MinPathSum(vector<vector<int>>& arr){
//     int row = arr.size() ; 
//     int col = arr[0].size() ; 
//     vector<vector<int>> dp (row , vector<int> (col , -1));

//     return fun(arr , row - 1 , col - 1 , dp);
// }

// int main(){

//     vector<vector<int>> arr = {{1 , 3 , 1} , {1 , 5 , 1} , {4 , 2 , 1}};

//     cout<<"Minimum path sum : "<<MinPathSum(arr);

//     return 0 ;
// }


////////////////   Tabulatiin Method //////////////////

// #include<bits/stdc++.h>
// using namespace std ; 

// int MinPathSum(vector<vector<int>>& arr){
//     int row = arr.size() ; 
//     int col = arr[0].size() ;
//     vector<vector<int>>dp (row , vector<int>(col , 0)); 

//     for(int i = 0 ; i < row ; i++){
//         for(int j = 0 ; j < col ; j++){
//             if(i == 0 && j == 0) dp[i][j] = arr[i][j] ; 
//             else{

//                     int up = (i > 0) ? arr[i][j] + dp[i - 1][j] : INT_MAX;

//                     int left = (j > 0) ? arr[i][j] + dp[i][j - 1] : INT_MAX;

//                 dp[i][j] = min(up , left);
//             }
//         }
//     }
//     return dp[row - 1][col - 1] ; 
// }

// int main(){

//     vector<vector<int>> arr = {{1 , 3 , 1} , {1 , 5 , 1} , {4 , 2 , 1}};

//     cout<<"Minimum path sum : "<<MinPathSum(arr);

//     return 0 ;
// }




///////////////////  Space Optimization ////////////



#include<bits/stdc++.h>
using namespace std ; 

int MinPathSum(vector<vector<int>>& arr){
    int row = arr.size() ; 
    int col = arr[0].size() ;

    vector<int> prev(col , 0);
    for(int i = 0 ; i < row ; i++){
        vector<int> cur(col , 0);
        for(int j = 0 ; j < col ; j++){
            if(i == 0 && j == 0) cur[j] = arr[i][j] ; 
            else{
                int up = (i > 0) ? arr[i][j] + prev[j] : INT_MAX ;
                int left = (j > 0) ? arr[i][j] + cur[j - 1] : INT_MAX ;
                
                cur[j] = min(up , left); 
            }
        }
        prev = cur ;
    }
    return prev[col - 1];
}

int main(){

    vector<vector<int>> arr = {{1 , 3 , 1} , {1 , 5 , 1} , {4 , 2 , 1}};

    cout<<"Minimum path sum : "<<MinPathSum(arr);

    return 0 ;
}