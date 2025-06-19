// Question - Given an array of intervals intervals where intervals[i] = [starti, endi], return the minimum number of intervals you need to
//   remove to make the rest of the intervals non-overlapping.

// Note that intervals which only touch at a point are non-overlapping. For example, [1, 2] and [2, 3] are non-overlapping.


// Example 1:

// Input: intervals = [[1,2],[2,3],[3,4],[1,3]]
// Output: 1
// Explanation: [1,3] can be removed and the rest of the intervals are non-overlapping.


#include<bits/stdc++.h>
using namespace std ;

class solution{
    private:

    static bool comp(vector<int>& a, vector<int>& b) {
        return a[1] < b[1];
    }

    public: 
    int Non_Overlapping(vector<vector<int>> intervals){
        sort(intervals.begin() , intervals.end() , comp);
        int count = 1 ; 
        int LastNumber = intervals[0][1];

        for(int i = 1 ; i < intervals.size(); i++){
            if(intervals[i][0] >= LastNumber){
                count++ ;
                LastNumber = intervals[i][1];
            }
        }
        return (intervals.size() - count) ;
    }
};

int main(){


    vector<vector<int>> intervals = {{1,2},{2,3},{3,4},{1,3}};

    solution obj ;
    cout<<"Number of Overlapping intervals is : "<<obj.Non_Overlapping(intervals);

    return 0 ;
}