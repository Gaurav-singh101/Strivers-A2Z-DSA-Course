///////////////////  Without DP  ///////////////////////////

#include<bits/stdc++.h>
using namespace std ; 

int uniquePaths(int m, int n) {
    if(m == 1 && n == 1)return 1 ; 
    if(m < 0 || n < 0)return 0 ; 

    int left = uniquePaths(m - 1 , n);
    int up = uniquePaths(m , n - 1);   
    
    return (left + up) ;
}

int main(){

    int m = 3 ; 
    int n = 7 ; 

    cout<<uniquePaths(3 , 7)<<endl ;

    return 0 ;
}