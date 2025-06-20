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

class solutuon {
    private: 

    int  DP_14(vector<int> arr , int target , int ind){
        if(ind == 0){
            return arr[ind] = target ;
        }

        int NotTake = DP_14(arr , target , ind - 1);
        int Take = false ; 
        if(arr[ind] < target){
            Take = DP_14(arr , target - arr[ind] , ind - 1);
        }

        return NotTake || Take ;
    }
};





