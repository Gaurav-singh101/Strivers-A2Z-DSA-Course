#include<bits/stdc++.h>
using namespace std ; 

int sqrtNumber(int num){
    int low = 0 , high = num ;
    
    int ans = 1 ; 

    while(low <= high){
        int mid = (low + high) / 2 ;

        if((mid * mid) <= num){
            ans = mid ;
            low = mid + 1 ;
        }else{
            high = mid - 1;
        }
    }
    return ans ;
}

int main(){

    int num = 28 ;

    cout<<"Square root is : "<<sqrtNumber(num);

    return 0 ;
}