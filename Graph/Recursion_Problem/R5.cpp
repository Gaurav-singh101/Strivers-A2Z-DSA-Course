/// Multiple recursion calls 

// Fibonacci Number 0 1 1 2 3 5 8 13 21 

// Without Recursion

// #include<iostream>

// void fibo(int n, int arr[]){

//     if(n >= 1) arr[0] = 0;
//     if(n >= 2) arr[1] = 1;


//     for(int i = 2; i < n; i++){
//         arr[i] = arr[i-1] + arr[i-2];
//     }


//     for(int i = 0; i < n; i++){
//         printf("%d ", arr[i]);
//     }
// }

// int main(){
//     int n = 5;
//     int arr[5];

//     fibo(n, arr);
//     return 0;
// }



///////////////////////////////////////////////////


#include<bits/stdc++.h>
using namespace std ; 

int  fibo(int n){
    if(n <= 1)return n;

    return fibo(n - 1) + fibo(n - 2);

}

int main(){

    int n = 5 ; 

    for(int i = 1 ; i <= n ; i++){
        cout<<fibo(i)<<" , ";
    }

    return 0 ;
}