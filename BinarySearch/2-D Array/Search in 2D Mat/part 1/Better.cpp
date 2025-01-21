#include <bits/stdc++.h>
using namespace std;

bool BinarySearch(vector<int> arr, int x) {
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] > x) {
            high = mid - 1;
        } else if (arr[mid] == x) {
            return true;
        } else {
            low = mid + 1;
        }
    }
    return false; 
}

bool Target(vector<vector<int>> Mat, int t) {
    int n = Mat.size();
    int m = Mat[0].size();

    for (int i = 0; i < n; i++) {
        if (Mat[i][m - 1] >= t  && Mat[i][0] <= t) {
            if (BinarySearch(Mat[i], t)) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    vector<vector<int>> Mat = {
        {3, 4, 7, 9},
        {12, 13, 16, 18},
        {20, 21, 23, 29}
    };

    int target = 12;

    cout << "The target is found or not: " << Target(Mat, target);

    return 0;
}
