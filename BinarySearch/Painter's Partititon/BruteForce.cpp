#include<bits/stdc++.h>
using namespace std ; 

int sumofArr(vector<int> arr){
    int ans = 0 ; 
    for(int i = 0 ; i < arr.size() ; i++){
        ans += arr[i];
    }
    return ans ;
}

int allocate(vector<int> arr , int x){
    int painter = 1 ; int allo = 0 ; 

    for(int i = 0 ; i < arr.size() ; i++){
        if(allo + arr[i] <= x){
            allo += arr[i];
        }else{
            painter++ ; 
            allo = arr[i];
        }
    }
    return painter ;

}

int painter(vector<int> arr , int k){
    int low = *max_element(arr.begin() , arr.end());
    int high = sumofArr(arr);

    for(int i = low ; i < high ; i++){
        if(allocate(arr , i) == k){
            return i ;
        }
    }
    return -1 ;
}


int main(){

    vector<int> arr = {10 , 20 , 30 , 40};
    int k = 2 ;

    cout<<"Maximum number of area for one painter : "<<painter(arr , k);

    return 0 ;
}