/////////////////  Memoization //////////////////////////

// #include<bits/stdc++.h>
// using namespace std ;


// int minCost(int n , vector<int> &heights , vector<int> &dp){
//     if(n == 0) return 0 ;

//     if(dp[n] != -1) return dp[n];

//     int left = minCost(n - 1 , heights , dp) + abs(heights[n] - heights[n - 1]);
//     int right = INT_MAX ;

//     if(n > 1) right = minCost(n - 2 , heights , dp) + abs(heights[n] - heights[n - 2]);


//     return dp[n] = min(left , right);
// }

// int main(){

//     vector<int> heights = {50 , 30 , 10 , 20};

//     int n = heights.size();

//     vector<int> dp(n + 1 , -1);

//     cout<<"Cost required : "<<minCost(n - 1 , heights , dp);

//     return 0 ;
// }





/////////////////////////////  Tabulation //////////////////


// #include<bits/stdc++.h>
// using namespace std ;

// int main(){

//     vector<int> heights = {20 , 30 , 40 , 20};

//     int n = heights.size();

//     vector<int> dp(n , 0);
//     dp[0] = 0 ; 

//     for(int i = 1 ; i < n ; i++){
//         int fs = dp[i - 1] + abs(heights[i] - heights[i - 1]);
//         int ss = INT_MAX ; 

//         if(i > 1) ss = dp[i - 2] + abs(heights[i] - heights[i - 2]);

//         dp[i] = min(fs , ss);
//     }

//     cout<<"The minimum step is : "<<dp[n - 1];
   
//     return 0 ;
// }




/////////////////////////////  Space Optimization  ////////////////////////////


#include<bits/stdc++.h>
using namespace std ; 

int main(){

    vector<int> pathCost = {50, 60 , 10 , 30 , 20};

    int n = pathCost.size();

    int prev = 0 ; 
    int Sprev = 0 ; 

    for(int i = 1 ; i < n ; i++){
        int fs = prev + abs(pathCost[i] - pathCost[i - 1]);
        int ss = INT_MAX ;
        if(n > 1){
            ss = Sprev + abs(pathCost[i] - pathCost[i - 2]);
        }
        Sprev = prev ;
        prev = min(fs , ss);
    }

    cout<<"Path Cost : "<<prev;

    return 0 ;
}