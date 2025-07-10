#include<bits/stdc++.h>
using namespace std ; 

int coinChange(vector<int> &coins , int amount){
    int n = coins.size() ;
    vector<int> ans ; 

    for(int i = n - 1 ; i >= 0 ; i--){
        while(amount >= coins[i]){
            ans.push_back(coins[i]);
            amount -= coins[i];
        }
    }

    return amount == 0 ? ans.size() : -1 ;
}

int main(){

    vector<int> coins = {1 , 2 , 5 , 10 , 20 , 50 , 100 , 200 , 500 , 2000};
    int amount = 879 ; 

    cout<<"The number of coin : "<<coinChange(coins , amount);

    return 0 ;
}