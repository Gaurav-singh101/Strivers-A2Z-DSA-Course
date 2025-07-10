// Time complexity - O(log (base - 2) n) 
// Space complexity - O(1)

#include<bits/stdc++.h>
using namespace std ;

int bs(vector<int> &arr , int low , int high , int target){


    if(low > high) return -1 ;

    int mid = (low + high) / 2 ;
    if(arr[mid] == target) return mid ;

    else if(arr[mid] < target){
        return bs(arr , mid + 1 , high , target);
    }
    
    else{
        bs(arr , low , mid - 1 , target);
    }

}

int search(vector<int> &arr , int target){
    int n = arr.size();
    int low = 0 ; 
    int high = n - 1 ;

    return bs(arr , low , high , target);
}

int main(){

    vector<int> arr = {2 , 4 , 7 , 10 , 13 , 17 , 29 , 37};

    int target = 13 ;

    int result =  search(arr , target);

    if(result == -1){
        cout<<"Not found"<<endl;
    }else{
        cout<<"Index is : "<<result ;
    }

    return 0 ;
}