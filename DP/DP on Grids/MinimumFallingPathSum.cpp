// #include <bits/stdc++.h>
// using namespace std;

// int fun(vector<vector<int>> &arr, int i, int j, int row, int col, vector<vector<int>> &dp)
// {
//     if (j < 0 || j >= col)
//         return 1e9; 

//     if (i == 0)
//         return arr[0][j];

//     if (dp[i][j] != -1)
//         return dp[i][j];

//     int up = arr[i][j] + fun(arr, i - 1, j, row, col, dp);
//     int ld = arr[i][j] + ((j > 0) ? fun(arr, i - 1, j - 1, row, col, dp) : 1e9);
//     int rd = arr[i][j] + ((j < col - 1) ? fun(arr, i - 1, j + 1, row, col, dp) : 1e9);

//     return dp[i][j] = min(up, min(ld, rd)); 
// }

// int MinimumFalling(vector<vector<int>> &arr, int row, int col)
// {
//     vector<vector<int>> dp(row, vector<int>(col, -1));
//     int miniSum = INT_MAX;

//     for (int j = 0; j < col; j++)
//     {
//         miniSum = min(miniSum, fun(arr, row - 1, j, row, col, dp));
//     }

//     return miniSum;
// }

// int main()
// {
//     vector<vector<int>> arr = {{2, 1, 3}, {6, 5, 4}, {7, 8, 9}};

//     int row = arr.size();
//     int col = arr[0].size();

//     cout << "Minimum sum of any falling path through matrix: " << MinimumFalling(arr, row, col) << endl;

//     return 0;
// }




///////////////////    Tabulation method ///////////////////////







