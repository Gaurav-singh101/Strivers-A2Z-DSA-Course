#include <bits/stdc++.h>
using namespace std;

int maxproduct(vector<int> &arr) {
    int result = INT_MIN;
    int n = arr.size();

    for (int i = 0; i < n; i++) {
        int pro = 1; 
        for (int j = i; j < n; j++) {
            pro = pro * arr[j];
            result = max(pro, result);
        }
    }
    return result;
}

int main() {
    vector<int> arr = {2, 3, -2, 4};
    cout << "Maximum product is: " << maxproduct(arr);
    return 0;
}
