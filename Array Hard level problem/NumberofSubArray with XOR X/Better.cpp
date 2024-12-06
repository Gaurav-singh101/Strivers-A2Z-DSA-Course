// XOR of 2 and 2 = 0 
// XOR of 0 and number = number itself


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int CountXORasX(vector<int> arr , int k){

    int n = arr.size();
    int count = 0 ;

    for(int i = 0 ; i < n ; i++){
        int XR = 0 ;
        for(int j = i ; j < n ; j++){
            XR  = (XR ^ arr[j] ); 

            if(XR == k) count++;
        }
    }

return count ;
}


int main(){

    vector<int> arr = {4 , 3 , 2 , 2 , 6 , 4};
    int k ;
    cout << "Enter target : ";
    cin >> k ;


    cout<<"Number of subarray : "<<CountXORasX(arr , k);


    return 0 ;
}




