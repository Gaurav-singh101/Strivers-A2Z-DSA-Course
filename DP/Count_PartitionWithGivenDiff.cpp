//Question -  Count partitions with given difference
// Given an array arr of n integers and an integer diff, count the number of ways to partition the array into two subsets such that the absolute difference between their sums is equal to diff. Return the result modulo 109+7.


// Examples:
// Input: arr = [1, 1, 2, 3], diff = 1

// Output: 3

// Explanation: The subsets are [1, 2] and [1, 3], [1, 3] and [1, 2], [1, 1, 2] and [3].




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

    int Partition(vector<int>& arr, int diff) {
        int totalsum = accumulate(arr.begin(), arr.end(), 0);
        if ((totalsum - diff) % 2 != 0 || totalsum < diff) return 0;

        int s2 = (totalsum - diff) / 2;
        return subsets(arr, s2);
    }
};

int main() {
    vector<int> arr = {1, 1, 2, 3};
    int diff = 1;

    Solution obj;
    cout << "Result : " << obj.Partition(arr, diff) << endl;

    return 0;
}
