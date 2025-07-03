// 39. Combination Sum
// Given an array of distinct integers candidates and a target integer target, return a list of all unique combinations of candidates where the chosen numbers sum to target. You may return the combinations in any order.

// The same number may be chosen from candidates an unlimited number of times. Two combinations are unique if the frequency of at least one of the chosen numbers is different.

// The test cases are generated such that the number of unique combinations that sum up to target is less than 150 combinations for the given input.


// Example 1:

// Input: candidates = [2,3,6,7], target = 7
// Output: [[2,2,3],[7]]
// Explanation:
// 2 and 3 are candidates, and 2 + 2 + 3 = 7. Note that 2 can be used multiple times.
// 7 is a candidate, and 7 = 7.
// These are the only two combinations.



#include<bits/stdc++.h>
using namespace std ; 

class Solution {
public:

    void helper(int ind , vector<int>& can , int target , vector<vector<int>> &res , vector<int>& temp){
        if(ind == can.size()){
            if(target == 0){
                res.push_back(temp);
            }
            return ;
        }

        if(can[ind] <= target){
            temp.push_back(can[ind]);
            helper(ind , can , target - can[ind] , res , temp);
            temp.pop_back();
        }
        helper(ind + 1 , can , target , res , temp);
    }


    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res ; 
        vector<int> temp ; 
        helper(0 , candidates , target , res , temp);
        return res ;
    }
};

int main(){

    vector<int> candidates = {2,3,6,7};
    int target = 7;

    Solution odj ;

    vector<vector<int>> ans = odj.combinationSum(candidates , target);

    cout<<"combination are : "<<endl ;

    for(auto it : ans){
        cout<<"[";
        for(int i = 0; i < it.size(); i++){
        cout << it[i];
        if(i != it.size() - 1){
            cout << " , ";
        }
    }
        cout<<"]"<<endl ;
    }


    return 0 ;
}