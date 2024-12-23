#include<bits/stdc++.h>
using namespace std ; 

int Missing(vector<int> arr , int k){

    int low = 0 ; int high = arr.size();

    while(low <= high){
        int mid = (low + high ) / 2 ;
        int missing = arr[mid] - (mid + 1);
        if(missing < k){
            low = mid + 1 ;
        }else{
            high = mid - 1 ; 
        }
    }
    return (low + k);
 }

int main(){

    vector<int> arr = {2 , 3 , 7 , 4 , 11} ;
    int k = 5 ;

    cout<<"Kth missing term is : "<<Missing(arr  , k);

    return 0 ;
}