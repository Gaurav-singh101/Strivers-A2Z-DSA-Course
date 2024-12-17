#include<bits/stdc++.h>
using namespace std ;

int Rotated(vector<int> arr){
    int n = arr.size();
    int low = 0  , high = n - 1 ; 
    int ans = INT_MAX ;
    int r  = -1 ;

    while(low <= high){
        int mid = (low + high) / 2 ;

        if(arr[low] <= arr[high]){
            if(arr[low] < ans){
                r = low ;
                ans = arr[low];
            }
            break;
        }

        if(arr[low] < arr[mid]){
            if(arr[low] < ans){
                r = low ;
                ans = arr[low];
            }
            low = mid + 1;
        }

        else{
            high = mid - 1;
            if(arr[mid] < ans){
                r = mid ;
                ans = arr[mid];
            }
        }
    }

    return r ;
}

int main(){

    vector<int> arr = {7 ,8 ,9 ,2, 4, 6};

    cout<<Rotated(arr)<<" Many times array rotated" ;

    return 0 ;
}