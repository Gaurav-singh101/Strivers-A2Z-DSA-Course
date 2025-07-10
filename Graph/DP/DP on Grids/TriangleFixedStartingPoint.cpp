// #include<bits/stdc++.h>
// using namespace std ;

// int fun(vector<vector<int>> & arr , int n , int i , int j){
//     if(i == n - 1)return arr[n - 1][j];

//     int D = arr[i][j] + fun(arr , n , i + 1 , j);
//     int DG  = arr[i][j] + fun(arr , n , i + 1 , j + 1);

//     return min(D , DG);
// }


// int triangle(vector<vector<int>> & arr){

//     int n = arr.size();

//     return fun(arr , n , 0 , 0);

// }

// int main(){

//     vector<vector<int>> arr = {{2} , {3 , 4} , {6 , 5 , 7} , {4 , 1 , 8 , 3}};

//     cout<<"the minimum path sum from top to bottom : "<<triangle(arr);

//     return 0 ;
// }


////////////////////////////////  Using DP //////////////////////////////




// #include<bits/stdc++.h>
// using namespace std ;

// int fun(vector<vector<int>> & arr , int n , int i , int j , vector<vector<int>>& dp){
//     if(i == n - 1)return arr[n - 1][j]; 

//     if(dp[i][j] != -1)return dp[i][j] ;

//     int D = arr[i][j] + fun(arr , n , i + 1 , j , dp);
//     int DG  = arr[i][j] + fun(arr , n , i + 1 , j + 1 , dp);

//     return dp[i][j] =  min(D , DG);
// }


// int triangle(vector<vector<int>> & arr){

//     int n = arr.size();

//     vector<vector<int>> dp(n , vector<int> (n , -1)) ;

//     return fun(arr , n , 0 , 0 , dp);

// }

// int main(){

//     vector<vector<int>> arr = {{2} , {3 , 4} , {6 , 5 , 7} , {4 , 1 , 8 , 3}};

//     cout<<"the minimum path sum from top to bottom : "<<triangle(arr);

//     return 0 ;
// }





/////////////////////  Tabulation Method  //////////////////


// #include <bits/stdc++.h>
// using namespace std;

// int triangle(vector<vector<int>> &arr) {
//     int n = arr.size();
//     vector<vector<int>> dp(n, vector<int>(n, 0));

//     // Copy the last row of arr to dp
//     for (int j = 0; j < n; j++) {
//         dp[n - 1][j] = arr[n - 1][j];
//     }

//     // Bottom-up DP
//     for (int i = n - 2; i >= 0; i--) {
//         for (int j = i; j >= 0; j--) {
//             int d = arr[i][j] + dp[i + 1][j];
//             int dg = arr[i][j] + dp[i + 1][j + 1];
//             dp[i][j] = min(d, dg);
//         }
//     }

//     return dp[0][0];  // Return the minimum path sum
// }

// int main() {
//     vector<vector<int>> arr = {{2}, {3, 4}, {6, 5, 7}, {4, 1, 8, 3}};

//     int ans = triangle(arr);
//     cout << "The minimum path sum from top to bottom: " << ans;
//     return 0;
// }



/////////////////////   Space Optimization ////////////////


#include <bits/stdc++.h>
using namespace std;

int triangle(vector<vector<int>> &arr) {
    int n = arr.size();
    vector<int> front(n, 0) , cur(n , 0);

    // Copy the last row of arr to dp
    for (int j = 0; j < n; j++) {
        front[j] = arr[n - 1][j];
    }

    // Bottom-up DP
    for (int i = n - 2; i >= 0; i--) {
        for (int j = i; j >= 0; j--) {
            int d = arr[i][j] + front[j];
            int dg = arr[i][j] + front[j + 1];
            cur[j] = min(d, dg);
        }
        front = cur ;
    }

    return front[0];  // Return the minimum path sum
}

int main() {
    vector<vector<int>> arr = {{2}, {3, 4}, {6, 5, 7}, {4, 1, 8, 3}};

    int ans = triangle(arr);
    cout << "The minimum path sum from top to bottom: " << ans;
    return 0;
}
