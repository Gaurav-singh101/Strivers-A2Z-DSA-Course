#include<bits/stdc++.h>
using namespace std ;


bool fun(vector<int> &arr , int ind , int target){
    if(target == 0)return true ; 
    if(ind == 0)return (target == arr[0]);

    bool Not_take = fun(arr , ind - 1 , target);
    bool take = false;
    if(target >= arr[ind]){
        take = fun(arr , ind - 1 , target - arr[ind]);
    }
    return (take or Not_take);
}


bool SumTarget(vector<int> &arr , int target){
    int n = arr.size();
    
    return fun(arr , n - 1 , target);
}

int main(){

    vector<int> arr = { 3 , 5 , 9 , 1 , 2};

    bool ans = SumTarget(arr , 55);

    if(ans == 1){
        cout<<"Target  found";
    }else{
        cout<<"Target not found";
    }

    return 0 ;
}
