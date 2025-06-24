// 518. Coin Change II
// You are given an integer array coins representing coins of different denominations and an integer amount representing a total amount of money.

// Return the number of combinations that make up that amount. If that amount of money cannot be made up by any combination of the coins, return 0.

// You may assume that you have an infinite number of each kind of coin.

// The answer is guaranteed to fit into a signed 32-bit integer.

 

// Example 1:

// Input: amount = 5, coins = [1,2,5]
// Output: 4
// Explanation: there are four ways to make up the amount:
// 5=5
// 5=2+2+1
// 5=2+1+1+1
// 5=1+1+1+1+1



#include<bits/stdc++.h>
using namespace std ;

class Solution{
    public : 

    int helper(vector<int>& arr , int target , int ind , vector<vector<int>>& dp){
        if(ind == 0){
            return target % arr[0] == 0 ;
        }
        if(dp[ind][target] != -1) return dp[ind][target];

        int Ntake = helper(arr , target , ind - 1 , dp);
        int take = 0 ; 
        if(target >= arr[ind]){
            take = helper(arr ,target - arr[ind] , ind , dp);
        }
        return (take + Ntake);
    }

    int Coin_Change(vector<int>& coins , int amount){
        int n = coins.size();
        vector<vector<int>> dp(n , vector<int> (amount + 1 , -1));
        return helper(coins , amount , n - 1 , dp);
    }
};


int main(){

    vector<int>coins = {1 , 2 , 5}; 
    int amount = 5 ; 

    Solution obj ;

    cout<<"Number of ways to form coin change : "<<obj.Coin_Change(coins , amount);

    return 0 ;
}