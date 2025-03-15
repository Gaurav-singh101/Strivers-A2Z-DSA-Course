#include<bits/stdc++.h>
using namespace std ; 

int fun(vector<vector<int>>& arr , int day , int last , vector<vector<int>>& dp) {
    if (day == 0) {
        int maxi = 0;
        for (int task = 0; task < 3; task++) {
            if (task != last) {
                maxi = max(maxi, arr[0][task]);
            }
        }
        return maxi; // Missing return statement fixed
    }

    if (dp[day][last] != -1) {
        return dp[day][last];
    }

    int maxi = 0; 
    for (int task = 0; task < 3; task++) {
        if (task != last) {
            int point = arr[day][task] + fun(arr , day - 1 , task , dp); // Fixed incorrect access to arr[day][last]
            maxi = max(maxi , point);
        }
    }

    return dp[day][last] = maxi;
}

int maximumPoints(vector<vector<int>>& arr) {
    int n = arr.size();
    vector<vector<int>> dp(n , vector<int>(4 , -1));
    return fun(arr , n - 1 , 3 , dp); // Fixed incorrect function call
}


int main(){

    vector<vector<int>> arr = {{1 , 2 , 5}, {3 , 1 , 1} , {3 , 3 , 3}};

    cout<<"Maximum point : "<<maximumPoints(arr) ;


    return 0 ;
}