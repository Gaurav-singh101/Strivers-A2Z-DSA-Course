#include<bits/stdc++.h>
using namespace std ;

vector<vector<int>> fun(int arr[] , int n){
    vector<vector<int>>res ; 
    int Subsets = (1 << n) ;

    for(int i = 0 ; i < Subsets ; i++){
        vector<int>subset ;
        for(int j = 0 ; j < n ; j++){
            if(i & (1 << j)){       /// Check ith Bit is set or not 
                subset.push_back(arr[j]);
            }
        }
        res.push_back(subset);
    }
    return res ;
}

int main(){

    int arr[] = {3 , 1 , 2};
    
    vector<vector<int>> res = fun(arr , 3);

for (auto it : res) {
    cout << "[";
    for (int i = 0; i < it.size(); i++) {
        cout << it[i];
        if (i != it.size() - 1) {
            cout << " , ";
        }
    }
    cout << "]\n";
}


    return 0 ;
}