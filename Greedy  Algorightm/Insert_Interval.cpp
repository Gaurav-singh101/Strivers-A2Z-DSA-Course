#include<bits/stdc++.h>
using namespace std ; 

vector<vector<int>> fun(vector<vector<int>> &arr , vector<int> &newInt){
    vector<vector<int>> res ;
    int n = arr.size();
    int i = 0 ;

    while(i < n && arr[i][1] < newInt[0]){
        res.push_back(arr[i]);
        i++ ;
    }

    while(i < n && arr[i][0] <= newInt[1]){
        newInt[0] = min(newInt[0] , arr[i][0]);
        newInt[1] = max(newInt[1] , arr[i][1]);
        i++ ;
    }
        res.push_back(newInt);

    while(i < n){
        res.push_back(arr[i]);
        i++ ;
    }
    return res ;
}

int main(){

    vector<vector<int>> arr = { {1 , 2} , {3 , 4} , {7 , 7} , {8 , 10} , {12 , 16}};

    vector<int> newInt = {5 , 6};

    vector<vector<int>> result = fun(arr , newInt);

    for(auto it : result){
        cout<<"{";
        for(auto i : it){
            cout<<i<<" ,";
        }
        cout<<"}";
    }

    return 0 ;
}