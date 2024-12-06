
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int CountXORasX(vector<int> A , int B){

    int n1 = A.size();
    int xr = 0 ;
    int cnt = 0 ; 
    map<int , int> mpp;
    mpp[xr]++;
    for(int i = 0 ; i < n1 ; i++){
        xr = (xr ^ A[i]) ; 
        int x = (xr ^ B) ;
        cnt += mpp[x];
        mpp[xr]++;
    }
    return cnt ; 
}


int main(){

    vector<int> arr = {4 , 3 , 2 , 2 , 6 , 4};
    int k ;
    cout << "Enter target : ";
    cin >> k ;


    cout<<"Number of subarray : "<<CountXORasX(arr , k);


    return 0 ;
}




