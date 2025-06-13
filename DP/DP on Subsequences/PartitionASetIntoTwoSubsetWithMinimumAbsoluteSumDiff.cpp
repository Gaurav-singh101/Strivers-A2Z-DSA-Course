#include<bits/stdc++.h>
using namespace std ;

int MinSumDiff_(vector<int> &arr , int n){
    int totSum = 0 ;

    for(int i = 0 ; i < n ; i++){
        totSum += arr[i] ;
    }

    int k = totSum ;

    vector<vector<bool>> dp(n, vector<bool>(k + 1, 0));

    for(int i = 0 ;  i < n; i++){
        dp[i][0] = true;
    }

    if(arr[0] <= k)
        dp[0][arr[0]] = true; 

    for(int ind = 1 ; ind < n; ind++){
        for(int target = 1 ; target <= k ; target++){
            bool Not_take = dp[ind - 1][target];
            bool take = false;
            if(arr[ind] <= target){
                take = dp[ind - 1][target - arr[ind]];
            }
            dp[ind][target] = take | Not_take;  
        }
    }
    
    int mini = 1e9 ; 

    for(int s1 = 0 ; s1 <= totSum / 2; s1++){
        if(dp[n - 1][s1] == true){
            mini = min(mini, abs((totSum - s1) - s1));
        }
    }

    return mini ;
}


int main(){

    vector<int> arr = { 3 , 5 , 9 , 9 };
    int n = arr.size(); 
    int ans = MinSumDiff_(arr , n);

    cout<<ans ;

    return 0 ;
}
