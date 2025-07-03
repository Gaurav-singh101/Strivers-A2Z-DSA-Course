// Question - Ith bit is set or not of number 
// Set means that ith position is - 1 
// Not Set means that ith position is - 0

// Ex - 13 , 2 nd bit 
// 13 - 1101 - 2nd bit is 1 then it is set 
// 13 - 1101 - 1nd bit is 0 then it is not set 

// // Using left sift 

// #include<bits/stdc++.h>
// using namespace std ;

// int main(){

//     int num = 13 ; 
//     int ith_Bit = 1 ;

//     if((num & (1 << ith_Bit)) != 0){
//         cout<<"Set";
//     }else{
//         cout<<"Not Set";
//     }

//     return 0 ;
// }




// Using right sift 

#include<bits/stdc++.h>
using namespace std ;

int main(){

    int num = 13 ; 
    int ith_Bit = 2 ;

    if(((num >> ith_Bit) & 1) != 0){
        cout<<"Set";
    }else{
        cout<<"Not Set";
    }

    return 0 ;
}