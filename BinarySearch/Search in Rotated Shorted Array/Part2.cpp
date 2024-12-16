#include<bits/stdc++.h>
using namespace std ;

bool searchInR(vector<int> &arr , int x){
    int n = arr.size();
    int low = 0 , high = n - 1;

    while(low <= high){
        int mid = (low + high)/2 ;

        if(arr[mid] == x) return true ;

        if(arr[low] == arr[mid] && arr[mid] == arr[high]){
            low = low + 1 ; 
            high = high - 1 ;
            continue;
        }

        if(arr[low] <= arr[mid]){
            if(arr[low] <= x && x <= arr[mid]){
                high = mid - 1; 
            }
            else{
                low = mid + 1 ;
            }
        }
        else{
            if(arr[mid] <= x && x <= arr[high]){
                low = mid + 1 ;
            }else{
                high = mid - 1 ;
            }
        }
    }

    return false ;
}

int main(){

    vector<int> arr = {7 , 8 ,9 , 1 , 3 , 3 , 3 , 5 , 7};

    int target = 4 ;

    cout<<"The target is "<<searchInR(arr , target);
    return 0 ;
}