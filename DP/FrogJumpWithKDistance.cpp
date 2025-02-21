#include <bits/stdc++.h>
using namespace std;

int jump(vector<int> &arr, int n, int k) {
    if (n == 1) return 0; 
    
    int path = INT_MAX;

    for (int j = 1; j <= k; j++) {
        if (n - j >= 1) {  
            int x = jump(arr, n - j, k) + abs(arr[n - 1] - arr[n - j - 1]);
            path = min(path, x);
        }
    }
    
    return path;
}

int minimizeCost(int k, vector<int>& arr) {
    int n = arr.size();
    return jump(arr, n, k);
}

int main() {
    vector<int> arr = {10, 30, 40, 50, 20}; 
    int k = 3;
    cout << minimizeCost(k, arr) << endl;
    return 0;
}
