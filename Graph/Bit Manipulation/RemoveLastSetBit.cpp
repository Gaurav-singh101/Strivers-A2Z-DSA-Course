// #include<bits/stdc++.h>
// using namespace std ; 

// int main(){

//     int n = 15 ; 

//     n = n & (n - 1) ;

//     cout<<"Remove Last set Bit : "<<n;

//     return 0 ;
// }


///////////////  Check power of 2 or not ////////////////


#include<bits/stdc++.h>
using namespace std ; 

int main(){

    int n = 16 ; 

    n = n & (n - 1) ;

    if(n == 0){
        cout<<"Power of 2";
    }else{
        cout<<"Not a power of two" ;
    }

    return 0 ;
}