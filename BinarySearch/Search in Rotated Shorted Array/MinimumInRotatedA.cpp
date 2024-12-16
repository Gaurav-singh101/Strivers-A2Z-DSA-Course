#include<bits/stdc++.h>
using namespace std ;

int searchs(vector<int> arr){
    int n = arr.size();
    int low = 0 , high = n - 1;
    int ans = INT_MAX ;

    while(low <= high){
        int mid = (low + high) / 2 ;

        if(arr[low] <= arr[mid]){
            ans = min(arr[low] , ans);
            low = mid + 1;
        }else{
            high = mid - 1 ;
            ans = min(ans , arr[mid]);
        }
    } 
    return ans ;
}

int main(){

vector<int> arr = {7 , 8 , 9 , 1 , 2 , 4 , 5 , 5 , 6};

cout<<"Minimum is : "<<searchs(arr);

    return 0 ;
}