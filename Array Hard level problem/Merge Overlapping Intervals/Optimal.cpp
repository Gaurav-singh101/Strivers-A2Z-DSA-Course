#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> MergeOverLappingIntervals(vector<vector<int>> arr) {

    int n = arr.size();
    sort(arr.begin() , arr.end());
    vector<vector<int>> ans ; 
    for(int i = 0 ; i< n ; i++){
        // for first Interval or new interval 
        if(ans.empty() || arr[i][0] > ans.back()[1]){
            ans.push_back(arr[i]);
        }else{
            ans.back()[1] = max(ans.back()[1] , arr[i][1]);
        }
    }

return ans ;
}

int main() {

    vector<vector<int>> intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};


    vector<vector<int>> result = MergeOverLappingIntervals(intervals);


    cout << "Merged Intervals: " << endl;
    for(auto interval : result) {
        cout << "[" << interval[0] << ", " << interval[1] << "]" << endl;
    }

    return 0;
}



