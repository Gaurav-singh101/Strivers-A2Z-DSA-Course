// Time Complexity = N Ki power N ; 
// Space Complexity = N 

// #include<bits/stdc++.h>
// using namespace std ; 

// int fun(vector<int> &arr , int ind , int jumps , int n){
//     if(ind >= n - 1)return jumps ;

//     int mini = INT_MAX ; 

//     for(int i = 1 ; i <= arr[ind] ; i++){
//         mini = min(mini , fun(arr , ind + i , jumps + 1 , n));
//     }

//     return mini ;
// }


// int MiniJumps(vector<int> &arr){
//     int n = arr.size();
//     return fun(arr , 0 , 0 , n);
// }

// int main(){

//     vector<int> arr = {2 , 3 , 1 , 1 , 4};

//     cout<<"Minimum Jumps : "<<MiniJumps(arr);

//     return 0 ;
// }


//////////////// Unsing DP /////////////


// #include<bits/stdc++.h>
// using namespace std ; 

// int fun(vector<int> &arr , int ind , int jumps , int n , vector<vector<int>> &dp){
//     if(ind >= n - 1)return jumps ;

//     if(dp[ind][jumps] != -1) return dp[ind][jumps];

//     int mini = INT_MAX ; 

//     for(int i = 1 ; i <= arr[ind] ; i++){
//         mini = min(mini , fun(arr , ind + i , jumps + 1 , n , dp));
//     }

//     return dp[ind][jumps] = mini ;
// }


// int MiniJumps(vector<int> &arr){
//     int n = arr.size();
//     vector<vector<int>> dp (n , vector<int> (n  , -1));
//     return fun(arr , 0 , 0 , n , dp);
// }

// int main(){

//     vector<int> arr = {2 , 3 , 1 , 1 , 4};

//     cout<<"Minimum Jumps : "<<MiniJumps(arr);

//     return 0 ;
// }


// Time Complexity = N Ki power 2 ; 
// Space Complexity = N ki power 2 ;




