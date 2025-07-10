// Question - Partition Array Into Two Arrays to Minimize Sum Difference

// You are given an integer array nums of 2 * n integers. You need to partition nums into two arrays of length n to minimize the absolute difference of the sums of the arrays. To partition nums, put each element of nums into one of the two arrays.
// Return the minimum possible absolute difference.

// Example 1:
// Input: nums = [3,9,7,3]
// Output: 2
// Explanation: One optimal partition is: [3,9] and [7,3].
// The absolute difference between the sums of the arrays is abs((3 + 9) - (7 + 3)) = 2.




#include<bits/stdc++.h>
using namespace std ;

class solution{
    public: 

    int miniSubsetSumDiff(vector<int> &arr , int n){
        int totalsum = 0 ; 
        for(int i = 0 ; i < n ; i++){
            totalsum += arr[i];
        }
        int k = totalsum ;
        
        vector<vector<bool>> dp(n , vector<bool>(k + 1 , 0));
        for(int i = 0 ; i < n ; i++){
            dp[i][0] = true ;
        }
        if(arr[0] <= k) dp[0][arr[0]] = true ;

        for(int i = 1 ; i < n ; i++){
            for(int j = 1 ; j <= k ; j++){
                bool Ntake = dp[i - 1][j];
                bool take = false ; 
                if(arr[i] <= j){
                    take = dp[i - 1][j - arr[i]];
                }
                dp[i][j] = take | Ntake ;
            }
        }


        // dp[n - 1][col -> 0 to totalsum]

        int mini = 1e9 ;

        for(int s1 = 0 ; s1 <= totalsum / 2 ; s1++){
            if(dp[n-1][s1] == true){
                mini = min(mini , abs(s1 - (totalsum - s1)));
            }
        }
        return mini ;
    }
};

int main(){

    vector<int> arr = {3,9,7,3};
    int n = arr.size();

    solution obj ;

    cout<<"Result : "<<obj.miniSubsetSumDiff(arr , n);

    return 0 ;
}





