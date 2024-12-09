#include<bits/stdc++.h>
using namespace std ; 

int lowerbound(vector<int> &arr , int target){
    int n = arr.size();
    int low = 0 ; 
    int high = n - 1 ;
    int ans = n ;

    while(low <= high){
        int mid = (low + high) / 2 ;

        if(arr[mid] >= target){
            ans = mid ;
            high = mid - 1 ; 
        }else {
            low = mid + 1 ;
        }
    }
    return ans; 
}

int main(){

    vector<int> arr = {2 , 3 , 5 , 6 , 6 , 8 , 27 , 55};

    int target = 100 ;
    cout <<"Index is : "<<lowerbound(arr , target);

    return 0 ; 
}