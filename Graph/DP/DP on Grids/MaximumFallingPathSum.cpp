// #include <bits/stdc++.h>
// using namespace std;

// int fun(vector<vector<int>> &arr, int i, int j, int row, int col, vector<vector<int>> &dp)
// {
//     if (j < 0 || j >= col)
//         return INT_MIN; 

//     if (i == 0)
//         return arr[0][j]; 

//     if (dp[i][j] != -1)
//         return dp[i][j];

//     int up = arr[i][j] + fun(arr, i - 1, j, row, col, dp);
//     int ld = arr[i][j] + ((j > 0) ? fun(arr, i - 1, j - 1, row, col, dp) : INT_MIN);
//     int rd = arr[i][j] + ((j < col - 1) ? fun(arr, i - 1, j + 1, row, col, dp) : INT_MIN);

//     return dp[i][j] = max(up, max(ld, rd)); 
// }

// int MaximumFalling(vector<vector<int>> &arr, int row, int col)
// {
//     vector<vector<int>> dp(row, vector<int>(col, -1));
//     int maxSum = INT_MIN;

//     for (int j = 0; j < col; j++)
//     {
//         maxSum = max(maxSum, fun(arr, row - 1, j, row, col, dp));
//     }

//     return maxSum;
// }

// int main()
// {
//     vector<vector<int>> arr = {{2, 1, 3}, {6, 5, 4}, {7, 8, 9}};

//     int row = arr.size();
//     int col = arr[0].size();

//     cout << "Maximum sum of any falling path through matrix : " << MaximumFalling(arr, row, col) << endl;

//     return 0;
// }




///////////////////    Tabulation method ///////////////////////



#include <bits/stdc++.h>
using namespace std;

int fun(vector<vector<int>> &arr, int i, int j, int row, int col, vector<vector<int>> &dp)
{
    if (j < 0 || j >= col)
        return INT_MIN; 

    if (i == 0)
        return arr[0][j]; 

    if (dp[i][j] != -1)
        return dp[i][j];

    int up = arr[i][j] + fun(arr, i - 1, j, row, col, dp);
    int ld = arr[i][j] + ((j > 0) ? fun(arr, i - 1, j - 1, row, col, dp) : INT_MIN);
    int rd = arr[i][j] + ((j < col - 1) ? fun(arr, i - 1, j + 1, row, col, dp) : INT_MIN);

    return dp[i][j] = max(up, max(ld, rd)); 
}

int MaximumFalling(vector<vector<int>> &arr, int row, int col)
{
    vector<vector<int>> dp(row, vector<int>(col, -1));
    int maxSum = INT_MIN;

    for (int j = 0; j < col; j++)
    {
        maxSum = max(maxSum, fun(arr, row - 1, j, row, col, dp));
    }

    return maxSum;
}

int main()
{
    vector<vector<int>> arr = {{2, 1, 3}, {6, 5, 4}, {7, 8, 9}};

    int row = arr.size();
    int col = arr[0].size();

    cout << "Maximum sum of any falling path through matrix : " << MaximumFalling(arr, row, col) << endl;

    return 0;
}

