// Question - Count subsets with sum K

// Given an array arr of n integers and an integer K, count the number of subsets of the given array that have a sum equal to K. Return the result modulo (109 + 7).


// Examples:
// Input: arr = [2, 3, 5, 16, 8, 10], K = 10

// Output: 3

// Explanation: The subsets are [2, 8], [10], and [2, 3, 5].


// #include<bits/stdc++.h>
// using namespace std ; 

// class solution{
//     public:

//     int helper(vector<int>& arr , int n , int k , vector<vector<int>>& dp){
//         if(k == 0)return 1 ;
//         if(n == 0){
//             return k == arr[0];
//         }
//         if(dp[n][k] != -1)return dp[n][k];

//         int Ntake = helper(arr, n - 1, k , dp);
//         int take = false ;
//         if(arr[n] <= k){
//             take = helper(arr, n - 1 , k - arr[n], dp);
//         }
//         return (take + Ntake) ;
//     }

//     int subsets(vector<int> &arr , int k){
//         int n = arr.size();
//         vector<vector<int>> dp (n , vector<int>(k + 1 , -1));
//         return helper(arr , n - 1 , k , dp);
//     }
// };

// int main(){

//     vector<int> arr = {2, 3, 5, 16, 8, 10};
//     int k = 10;

//     solution obj ; 

//     cout<<"Number of subset with the target sum is : "<<obj.subsets(arr , k);

//     return 0;
// }


// Time complexity - O(N * Sum)
// Space complexity - O(N * Sum) + O(N)



//////////////  Tabulation  ///////////////////



// #include<bits/stdc++.h>
// using namespace std ; 

// class solution{
//     public:

//     int subsets(vector<int> &arr , int k){
//         int n = arr.size();
//         vector<vector<int>> dp (n , vector<int>(k + 1 , 0));

//         // Base case: for all i, sum = 0 has 1 subset (empty subset)
//         for(int i = 0 ; i < n ; i++){
//             dp[i][0] = 1 ;
//         }

//         // First row base case
//         if (arr[0] <= k) {
//             dp[0][arr[0]] = 1;
//         }

//         for(int i = 1 ; i < n ; i++){
//             for(int j = 1 ; j <= k ; j++){
//                 int Ntake = dp[i - 1][j];
//                 int take = false ;
//                 if(arr[i] <= j){
//                     take = dp[i - 1][j - arr[i]];
//                 }
//                 dp[i][j] = take + Ntake ; 
//             }
//         }
//         return dp[n - 1][k];
//     }
// };

// int main(){

//     vector<int> arr = {2, 3, 5, 16, 8, 10};
//     int k = 10;

//     solution obj ; 

//     cout<<"Number of subset with the target sum is : "<<obj.subsets(arr , k);

//     return 0;
// }





////////////////////////  Space Optimization ////////////////


#include<bits/stdc++.h>
using namespace std ; 

class solution{
    public:

    int subsets(vector<int> &arr , int k){
        int n = arr.size();

        vector<int> prev(k + 1 , 0) , cur(k + 1 , 0);
        prev[0] = cur[0] = 1 ;
        if(arr[0] <= k) prev[arr[0]] = 1 ;

        for(int i = 1 ; i < n ; i++){
            for(int j = 0 ; j <= k ; j++){
                int Ntake = prev[j];
                int take = 0 ; 
                if(arr[i] <= j) take = prev[j - arr[i]];

                cur[j] = take + Ntake ; 
            }
            prev = cur ;
        }
        return prev[k];
    }

};

int main(){

    vector<int> arr = {2, 3, 5, 16, 8, 10};
    int k = 10;

    solution obj ; 

    cout<<"Number of subset with the target sum is : "<<obj.subsets(arr , k);

    return 0;
}

