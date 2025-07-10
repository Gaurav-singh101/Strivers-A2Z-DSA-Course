#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> MergeIntervals ;

        if(intervals.size() == 0) return MergeIntervals ;
        sort(intervals.begin() , intervals.end());
        vector<int> tempIntervals = intervals[0];

        for(auto it : intervals){
            if(it[0] <= tempIntervals[1]){
                tempIntervals[1] = max(it[1] , tempIntervals[1]);
            }else{
                MergeIntervals.push_back(tempIntervals);
                tempIntervals = it ;
            }
        }

        MergeIntervals.push_back(tempIntervals);
        return MergeIntervals ;
    }
};

int main(){

    vector<vector<int>> intervals = {{1,3},{2,6},{8,10},{15,18}};

    Solution obj ; 

    vector<vector<int>> Ans = obj.merge(intervals);

    for(auto it : Ans){
        cout<<"[ ";
        for(auto i : it){
            cout<<i<<" ";
        }
        cout<<"]";
    }

    return 0 ; 
}