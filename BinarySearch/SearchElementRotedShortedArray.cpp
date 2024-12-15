// Time complexity - O(log base 2 n)
// space complexity - O(1)

#include<bits/stdc++.h>
using namespace std ;

int search(vector<int> arr , int x){
    int n  = arr.size();
    int low = 0 , high = n - 1 ;

    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid] == x){
            return mid;
        }

// left shorted 

        if(arr[low] <= arr[mid]){
            if(arr[low] <= x && x <= arr[mid]){
                high = mid - 1 ;
            }else{
                low = mid + 1 ;
            }
        }

// Right sorted 

        else{
            if(arr[mid] <= x && arr[high] >= x){
                low = mid + 1 ;
            }else{
                high = mid - 1;
            }
        }
    }

    return -1 ;
}



int main(){

    vector<int> arr = {7 , 8 , 9 , 1 , 2 , 3 , 4 , 5 , 6};

    int target = 3;

    cout<<"Target is : "<<search(arr , target);

    return 0 ;
}