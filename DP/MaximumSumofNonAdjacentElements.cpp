/////////////  House Robber (Without DP) //////////////

// #include<bits/stdc++.h>
// using namespace std ; 

// int maximumprofit(vector<int> &nums , int n){
//     if(n < 0)return 0 ;
//     if(n == 0)return nums[0];

//     int pick = nums[n] + maximumprofit(nums , (n - 2));
//     int NotPick = 0 + maximumprofit(nums , (n - 1));

//     return max(pick , NotPick);
// }


// int rob(vector<int>& nums) {
//         int n = nums.size() ; 
//         return maximumprofit(nums , n - 1);
// }

// int main(){

//     vector<int> arr = {2 , 7 , 9 , 3 , 1};

//     cout<<rob(arr);


//     return 0 ;
// }


// Time complexity - 2 ki power n



/////////////  House Robber  (DP - Memoization )//////////////



// #include<bits/stdc++.h>
// using namespace std ; 


// int maximumprofit(vector<int> &nums , int n , vector<int> &dp){
//     if(n < 0)return 0 ;
//     if(n == 0)return nums[0];

//     if(dp[n] != -1)return dp[n]; 
//     int pick = nums[n] + maximumprofit(nums , (n - 2) , dp);
//     int NotPick = 0 + maximumprofit(nums , (n - 1) , dp);

//     return dp[n] = max(pick , NotPick);
// }


// int rob(vector<int>& nums) {
//     int n = nums.size() ;
//     vector<int> dp(n , -1);
//     return maximumprofit(nums , n - 1 , dp);
// }


// int main(){

//     vector<int> arr = {2 , 7 , 9 , 3 , 1};

//     cout<<rob(arr);


//     return 0 ;
// }



// Time complexity - O(n)
// Space Complexity - O(n) + O(n) - Stack space and dp



/////////////  House Robber  (DP - Tabulation)//////////////


// #include<bits/stdc++.h>
// using namespace std ; 

// int main(){

//     vector<int> arr = {2 , 7 , 9 , 3 , 1};

//     int n = arr.size();

//     vector<int> dp(n);
//     dp[0] = arr[0];
//     int neg = 0 ;

//     for(int i = 1 ; i < n ; i++){
//         int take = arr[i] ; if(i > 1) take += dp[i - 2];
//         int nontake = 0 + dp[i - 1];

//         dp[i] = max(take , nontake);
//     }

//     cout<<dp[n - 1] ;

//     return 0 ;
// }

// Time complexity - O(n)
// Space Complexity - O(n)





/////////////  Ho  use Robber  (DP - Tabulation (Space Optimization ))//////////////



#include<bits/stdc++.h>
using namespace std ; 

int main(){

    vector<int> arr = {2 , 7 , 9 , 3 , 1};

    int n = arr.size();

    int prev = arr[0];
    int prev2 = 0 ;

    for(int i = 1 ; i < n ; i++){
        int take = arr[i] ; if(i > 1) take += prev2;
        int nontake = 0 + prev;

        int curi = max(take , nontake);

        prev2 = prev ; prev = curi ;
    }

    cout<<prev ;

    return 0 ;
}


// Time complexity - O(n)
// Space Complexity - O(1)