#include<bits/stdc++.h>
using namespace std ;


bool fun(vector<int> &arr , int ind , int target , vector<vector<int>> &dp){
    if(target == 0)return true ; 
    if(ind == 0)return (target == arr[0]);

    if(dp[ind][target] != -1)return dp[ind][target];

    bool Not_take = fun(arr , ind - 1 , target , dp);
    bool take = false;
    if(target >= arr[ind]){
        take = fun(arr , ind - 1 , target - arr[ind] , dp);
    }
    return dp[ind][target] = (take or Not_take);
}


bool SumTarget(vector<int> &arr , int target){
    int n = arr.size();
    vector<vector<int>> dp(n, vector<int>(target + 1, -1));
    return fun(arr , n - 1 , target , dp);
}

bool CheckSubset(vector<int> &arr , int target){
    int sum = 0;

    for(int i = 0 ; i < arr.size() ; i++){
        sum = sum + arr[i];
    }

    if(sum % 2 != 0){
        return false ;
    }

    int subSet_Sum = sum / 2 ;

    return SumTarget(arr , subSet_Sum);

}



int main(){

    vector<int> arr = { 3 , 5 , 9 , 1 , 2};

    bool ans = CheckSubset(arr , 5);

    if(ans == 1){
        cout<<"Subset  found";
    }else{
        cout<<"Subset not found";
    }

    return 0 ;
}
