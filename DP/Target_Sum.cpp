// 494. Target Sum
// You are given an integer array nums and an integer target.

// You want to build an expression out of nums by adding one of the symbols '+' and '-' before each integer in nums and then concatenate all the integers.

// For example, if nums = [2, 1], you can add a '+' before 2 and a '-' before 1 and concatenate them to build the expression "+2-1".
// Return the number of targeterent expressions that you can build, which evaluates to target.

 

// Example 1:

// Input: nums = [1,1,1,1,1], target = 3
// Output: 5
// Explanation: There are 5 ways to assign symbols to make the sum of nums be target 3.
// -1 + 1 + 1 + 1 + 1 = 3
// +1 - 1 + 1 + 1 + 1 = 3
// +1 + 1 - 1 + 1 + 1 = 3
// +1 + 1 + 1 - 1 + 1 = 3
// +1 + 1 + 1 + 1 - 1 = 3



#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int helper(vector<int>& arr, int target, int n, vector<vector<int>>& dp) {
        if (n == 0) {
            if (target == 0 && arr[0] == 0) return 2;
            if (target == 0 || target == arr[0]) return 1;
            return 0;
        }

        if (dp[n][target] != -1) return dp[n][target];

        int Ntake = helper(arr, target, n - 1, dp);
        int take = 0;
        if (arr[n] <= target) {
            take = helper(arr, target - arr[n], n - 1, dp);
        }

        return dp[n][target] = Ntake + take;
    }

    int subsets(vector<int>& arr, int target) {
        int n = arr.size();
        vector<vector<int>> dp(n, vector<int>(target + 1, -1));
        return helper(arr, target, n - 1, dp);
    }

    int Partition(vector<int>& arr, int target) {
        int totalsum = accumulate(arr.begin(), arr.end(), 0);
        if ((totalsum - target) % 2 != 0 || totalsum < target) return 0;  // has to bs even 

        int s2 = (totalsum - target) / 2;
        return subsets(arr, s2);
    }
};

int main(){
    vector<int> arr = {1,1,1,1,1};
    int target = 3;

    Solution obj;
    cout<< "Target Sum : " << obj.Partition(arr, target) << endl;

    return 0;
}

