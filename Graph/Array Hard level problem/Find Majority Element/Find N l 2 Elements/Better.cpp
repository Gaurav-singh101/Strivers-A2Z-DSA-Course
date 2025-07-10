//  Using Hshing - Better Approch 

#include<bits/stdc++.h>
using namespace std ; 

int Majority(vector<int>& arr){
    int n = arr.size() ; 

    map<int , int> mapp ; 

    for(int i= 0 ; i < n ; i++){
        mapp[arr[i]]++;
    }

    for(auto it : mapp){
        if(it.second > n / 2){
            return it.first ;
        }
    }

    return -1;
}

int main(){

    vector<int> arr = {2, 1, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6, 6};

    cout<<"Majority elements are : " << Majority(arr);
    return 0 ;
}