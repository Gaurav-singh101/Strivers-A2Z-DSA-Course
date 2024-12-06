     // Binary Search = BS nothing but a searching algorigthm  in a limited search space 
     // (only aplicable in sorted area)
     // (split into halfs while searching)
     // Ex - Dictionary


#include<bits/stdc++.h>
using namespace std ; 

int search(vector<int> &arr , int target){
    int n = arr.size();
    int low = 0 ; 
    int high = n - 1 ;
    int mid ;

    while(low <= high){
        mid = (low + high) / 2 ;

        if(arr[mid] == target) return mid ;
        else if(target > arr[mid]) low = mid + 1 ;
        else {
            high = mid - 1;
        }
    }
    return -1 ;
}


int main(){

    vector<int> arr = {2 , 4 , 7 , 10 , 13 , 17 , 29 , 37};
    int target = 12 ;
    int result = search(arr , target);

    if(result == -1){
        cout<<"Not found"<<endl ;
    }else{
        cout<<"Index is : "<<result ;
    }

    return 0 ;
}











