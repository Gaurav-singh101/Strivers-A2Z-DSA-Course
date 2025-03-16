///////////////////  Using Memoisation ///////////////

// #include <bits/stdc++.h>
// using namespace std;

// int fun(int m , int n , vector<vector<int>>& dp) {
//     if (m == 1 && n == 1) return 1; 
//     if (m < 1 || n < 1) return 0; 

//     if (dp[m][n] != -1) return dp[m][n]; 

//     int left = fun(m - 1, n, dp);
//     int up = fun(m, n - 1, dp); 
    
//     return dp[m][n] = left + up;
// }

// int uniquePaths(int m, int n) {
//     vector<vector<int>> dp(m + 1, vector<int>(n + 1, -1));
//     return fun(m, n, dp);
// }

// int main() {
//     int m = 3, n = 7;
//     cout << uniquePaths(m, n) << endl;
//     return 0;
// }



/////////////////////  Using Tbulation //////////////////////////


// #include <bits/stdc++.h>
// using namespace std;

// int main(){

//     int m = 3, n = 7;

//     vector<vector<int>> dp(m + 1, vector<int>(n + 1));

//     for(int i = 0 ; i < m ; i++){
//         for(int j = 0 ; j < n ; j++){
//             if(i == 0 && j == 0){
//                 dp[0][0] = 1 ;
//             }else{
//                 int up = 0 ; int left = 0 ; 
//                 if(i > 0) up = dp[i - 1][j];
//                 if(j > 0) left = dp[i][j - 1];
//                 dp[i][j] = up + left;
//             }
//         }
//     }

//     cout<<dp[m - 1][n - 1];

//     return 0; 
// }




///////////////////////  Space Optmization //////////////////////


#include <bits/stdc++.h>
using namespace std;

int main(){

    int m = 3, n = 7;

    vector<int> prev(n , 0);

    for(int i = 0 ; i < m ; i++){
        vector<int> cur(n , 0);
        for(int j = 0 ; j < n ; j++){
            if(i == 0 && j == 0){
                cur[j] = 1 ;
            }else{
                int up = 0 ; int left = 0 ; 
                if(i > 0) up = prev[j];
                if(j > 0) left = cur[j - 1];
                cur[j] = up + left;
            }
        }
        prev = cur ;
    }   

    cout<<prev[n - 1];

    return 0; 
}

