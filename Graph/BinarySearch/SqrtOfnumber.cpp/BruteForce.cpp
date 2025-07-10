#include<bits/stdc++.h>
using namespace std ;

int sqrtNumber(int num){
    int ans = 1 ;

    for(int i = 0 ; i <= num ; i++){
        if(i*i <= num){
            ans = i ;
            continue;
        }else{
            break;
        }
    }
    return ans ;
}

int main(){

    int num = 39 ;

    cout<<"The square root of a number : "<<sqrtNumber(num);


    return 0 ;
}