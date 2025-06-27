// 239. Sliding Window Maximum

// You are given an array of integers nums, there is a sliding window of size k which is moving from the very left of the array to the very right. You can only see the k numbers in the window. Each time the sliding window moves right by one position.

// Return the max sliding window.


// Example 1:

// Input: nums = [1,3,-1,-3,5,3,6,7], k = 3
// Output: [3,3,5,5,6,7]
// Explanation: 
// Window position                Max
// ---------------               -----
// [1  3  -1] -3  5  3  6  7       3
//  1 [3  -1  -3] 5  3  6  7       3
//  1  3 [-1  -3  5] 3  6  7       5
//  1  3  -1 [-3  5  3] 6  7       5
//  1  3  -1  -3 [5  3  6] 7       6
//  1  3  -1  -3  5 [3  6  7]      7




#include<bits/stdc++.h>
using namespace std ;


class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> res ; 
        for(int i = 0 ; i <= nums.size() - k ; i++){
            int maxi = nums[i];
            for(int j = i ; j < (i + k); j++){
                maxi = max(maxi , nums[j]);
            }
            res.push_back(maxi);
        }
        return res ;
    }
};


int main(){

    vector<int> nums = {1,3,-1,-3,5,3,6,7} ;
    int k = 3 ;

    Solution obj ; 

    vector<int> res = obj.maxSlidingWindow(nums , k);

    for(auto it : res){
        cout<<it<<" , ";
    }

    return 0 ;
}