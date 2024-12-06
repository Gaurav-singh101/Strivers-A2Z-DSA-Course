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


#include<iostream>
using namespace std; 

void fibo(int n) {
    int a[n];
    for (int i = 0; i < n; i++){
       if  (i==0) {a[0] = 0 ;}; 
       if (i ==1) {a[1] = 1 ;};
        
    }
    
    for (int i = 2; i < n; i++) {
        a[i] = a[i - 1] + a[i - 2];
    }

}

int main() {
    fibo(5);
    return 0;
}


///////////////////////////////////////////////////


// #include<iostream>
// using namespace std ;

// int f(int n){
//     if(n <= 1) return n ;
//     int last = f(n-1);
//     int s_last = f(n-2);
//     return last + s_last ;
// }

// int main(){

//     int n = 4 ; 
//     cout << f(4) ;

//     return 0 ;
// }