// #include<bits/stdc++.h>
// using namespace std ;


// bool fun(vector<int> &arr , int ind , int target){
//     if(target == 0)return true ; 
//     if(ind == 0)return (target == arr[0]);

//     bool Not_take = fun(arr , ind - 1 , target);
//     bool take = false;
//     if(target >= arr[ind]){
//         take = fun(arr , ind - 1 , target - arr[ind]);
//     }
//     return (take or Not_take);
// }


// bool SumTarget(vector<int> &arr , int target){
//     int n = arr.size();
    
//     return fun(arr , n - 1 , target);
// }

// int main(){

//     vector<int> arr = { 3 , 5 , 9 , 1 , 2};

//     bool ans = SumTarget(arr , 55);

//     if(ans == 1){
//         cout<<"Target  found";
//     }else{
//         cout<<"Target not found";
//     }

//     return 0 ;
// }


///////////////   DP   /////////////////////


// #include<bits/stdc++.h>
// using namespace std ;


// bool fun(vector<int> &arr , int ind , int target , vector<vector<int>> &dp){
//     if(target == 0)return true ; 
//     if(ind == 0)return (target == arr[0]);

//     if(dp[ind][target] != -1)return dp[ind][target];

//     bool Not_take = fun(arr , ind - 1 , target , dp);
//     bool take = false;
//     if(target >= arr[ind]){
//         take = fun(arr , ind - 1 , target - arr[ind] , dp);
//     }
//     return dp[ind][target] = (take or Not_take);
// }


// bool SumTarget(vector<int> &arr , int target){
//     int n = arr.size();
//     vector<vector<int>> dp(n, vector<int>(target + 1, -1));
//     return fun(arr , n - 1 , target , dp);
// }

// int main(){

//     vector<int> arr = { 3 , 5 , 9 , 1 , 2};

//     bool ans = SumTarget(arr , 5);

//     if(ans == 1){
//         cout<<"Target  found";
//     }else{
//         cout<<"Target not found";
//     }

//     return 0 ;
// }




////////////  Space Optimization  //////////



#include<bits/stdc++.h>
using namespace std ;


bool SumTarget(vector<int> &arr , int n , int k){

    vector<vector<bool>> dp(n, vector<bool>(k + 1, 0));

    for(int i = 0 ;  i < n; i++){
        dp[i][0] = true;
    }

    if(arr[0] <= k)
        dp[0][arr[0]] = true; 

    for(int ind = 1 ; ind < n; ind++){
        for(int target = 1 ; target <= k ; target++){
            bool Not_take = dp[ind - 1][target];
            bool take = false;
            if(arr[ind] <= target){
                take = dp[ind - 1][target - arr[ind]];
            }
            dp[ind][target] = take | Not_take;  
        }
    }
    return dp[n - 1][k];  
}


int main(){

    vector<int> arr = { 3 , 5 , 9 , 1 , 2};
    int n = arr.size();
    bool ans = SumTarget(arr , n , 5);

    if(ans == 1){
        cout<<"Target  found";
    }else{
        cout<<"Target not found";
    }

    return 0 ;
}
