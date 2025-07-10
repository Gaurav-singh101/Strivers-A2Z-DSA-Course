#include <bits/stdc++.h>
using namespace std;

int jump(vector<int> &arr, int n, int k , vector<int>& dp) {
    if (n == 0) return 0; 
    if(dp[n] != -1) return dp[n] ;
    
    int path = INT_MAX;

    for (int j = 1; j <= k; j++) {
        if (n - j >= 0) {  
            int x = jump(arr, n - j, k , dp) + abs(arr[n] - arr[n - j]);
            path = min(path, x);
        }
    }
    
    return dp[n] = path;
}

int minimizeCost(int k, vector<int>& arr) {
    int n = arr.size() - 1;
    vector<int> dp (n + 1 , -1);
    return jump(arr, n, k , dp);
}

int main() {
    vector<int> arr = {10, 30, 40, 50, 20}; 
    int k = 3;
    cout << minimizeCost(k, arr) << endl;
    return 0;
}














