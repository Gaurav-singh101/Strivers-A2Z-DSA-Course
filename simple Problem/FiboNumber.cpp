// #include<bits/stdc++.h>
// using namespace std ;

// int fibo(int n){
//     if(n == 1){
//         return 1 ;
//     }

//     int a = 1 , b = 1 ;

//     for(int i = 3 ; i <= n ; i++){
//         int temp = b ; 
//         b = a + b ; 
//         a = temp ;
//     }

//     return b ;
// }

// int main(){
//     int n ; 
//     cout<<"Enter number : ";
//     cin>>n ; 

//     cout<<"The fibo of "<<n<<" is : "<<fibo(n);
// }



/////////////////////////////////////////////////////////////





#include<bits/stdc++.h>
using namespace std ;

int fibo(int n){
    if(n <= 1){
        return n ;
    }
    return fibo(n - 1) + fibo(n - 2);
}

int main(){
    int n ; 
    cout<<"Enter number : ";
    cin>>n ; 

    cout<<"The fibo of "<<n<<" is : "<<fibo(n);
}