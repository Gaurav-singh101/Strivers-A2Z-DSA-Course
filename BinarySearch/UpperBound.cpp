// Time complexity - O(log base 2 n)

#include<bits/stdc++.h>
using namespace std ; 

int upperbound(vector<int> &arr , int target){
    int n = arr.size();
    int low = 0 ; 
    int high = n - 1;
    int ans = n;

    while(low < high){
        int mid = (low + high)/2 ;

        if(arr[mid] >= target){
            ans = mid ; 
            high = mid - 1 ;
        }else{
            low = mid + 1 ;
        }
    }
return ans ;
}

int main(){

    vector<int> arr = {2 , 4 , 5 , 7 , 8 , 9 , 14 , 17};
    int target = 12 ;

    cout<<"Upper bound : "<<upperbound(arr , target);


    return 0 ;
}