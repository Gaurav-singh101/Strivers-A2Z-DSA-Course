#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> MergeOverLappingIntervals(vector<vector<int>> arr) {
    int n = arr.size();
    
    // Sort intervals based on the starting time
    sort(arr.begin(), arr.end());

    vector<vector<int>> ans;

    for(int i = 0; i < n; i++) {
        int start = arr[i][0];
        int end = arr[i][1];

        // If the answer list is not empty and the current interval overlaps with the last one
        if(!ans.empty() && start <= ans.back()[1]) {
            continue;
        }

        // Check for further overlaps
        for(int j = i + 1; j < n; j++) {
            if(arr[j][0] <= end) {
                end = max(end, arr[j][1]);
            } else {
                break;
            }
        }

        // Add the merged interval
        ans.push_back({start, end});
    }

    return ans;
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










