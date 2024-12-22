#include<bits/stdc++.h>
using namespace std ;

int maxi(vector<int> arr){
    int ans = INT_MIN ; 

    for(int i = 0 ; i < arr.size() ; i++){
        ans = max(ans , arr[i]);
    }
    return ans ;
}  

int divi(vector<int> arr , int mid , int threshold){
    int sum = 0 ; 
    for(int i = 0 ; i < arr.size() ; i++){
        sum += ceil((float)arr[i] / (float)mid) ;
    }
    return sum ;
}

int divisor(vector<int> arr , int threshold){
    int low = 1 , high = maxi(arr); 
    int ans = -1 ;
    while(low <= high){
        int mid = (low + high) / 2 ;

        if( divi(arr , mid , threshold) <= threshold){
            ans = mid ;
            high = mid - 1 ; 
        }else{  
            low = mid + 1 ;
        }
    }
    return ans;
}

int main(){

    vector<int> arr = {1 , 2 , 5 , 9};
    int threshold = 6 ;

    cout<<"Smallest divisor : "<<divisor(arr , threshold);

    return 0 ;
}