// #include<bits/stdc++.h>
// using namespace std ; 

// int main(){

//     int n = 19; 

//     int count = 0 ; 

//     while(n > 1){
//         count += n & 1 ;
//         n = n >> 1 ;
//     }
//     if(n == 1)count++ ;


//     cout<<"Number of bit is : "<<count ;


//     return 0;
// }



////////////////  Second Method /////////////


#include<bits/stdc++.h>
using namespace std ; 

int main(){

    int n = 19; 

    int count = 0 ; 

    while((n & n - 1) != 0){
        count += 1;
        n = n - 1 ;
    }

    cout<<"Number of bits is : "<<count ;


    return 0;
}