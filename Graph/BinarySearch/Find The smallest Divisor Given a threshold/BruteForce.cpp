#include<bits/stdc++.h>
using namespace std ;

int maxi(vector<int> arr){
    int ans = INT_MIN ; 

    for(int i = 0 ; i < arr.size() ; i++){
        ans = max(ans , arr[i]);
    }
    return ans ;
}        

int divisor(vector<int> arr , int threshold){

    for(int d = 1 ; d < maxi(arr) ; d++){
        int sum = 0 ;
        for(int i = 0 ; i < arr.size() ; i++){
            sum += ceil((float)arr[i] / (float)d);
        }  
        if(sum <= threshold){
            return d ;
        } 
    }
    return -1 ;
}

int main(){

    vector<int> arr = {1 , 2 , 5 , 9};
    int threshold = 6 ;

    cout<<"Smallest divisor : "<<divisor(arr , threshold);

    return 0 ;
}