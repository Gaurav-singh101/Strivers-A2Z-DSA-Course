#include<bits/stdc++.h>
using namespace std ; 

int main(){

    // And Operator - &
 
    // It will convert both Numbers into Binary form then 
    //start compair from right side if same '1 or 0' 
    //then 1 otherwise '0'
    int And = 13 & 7 ;
    cout<<"After and : "<<And<<endl ;

    // or Operator - |

    // It will convert both Numbers into Binary form then 
    //start compair from right side if any one of these number is '1' - true
    // Otherwise false ;
    
    int Or = 13 | 7 ;
    cout<<"After or  : "<<Or<<endl ;


    // Xor Operator - ^

    //  no. og 1s is odd - 1 
    //  no. og 1s is even - 0

    int Xor = 13 ^ 7;
    cout<<"Xor of numbers is : "<<Xor<<endl ;

    // Right  Shift Operator - >>

    int RS = 13 >> 2 ; 
    // It will convert 13 into Binary , then remove right 2 places 
    // and then give decimal result of equvalent binary  
    cout<<"Right shift : "<<RS<<endl;

    // Formula - x / 2 ki power (sift number)


    // Left Sift operator - <<
    int LS = 13 <<  2 ; 
    // It will convert 13 into Binary ,and then sift all 
    //binary number with 2 places. 
    // Boundary - [(2 ki power 31 - 1) << 1 ] it will overflow condition , 
    // because last bit is use for sign - that why it is overflow condition 
    cout<<"Left shift : "<<LS<<endl ;


    // Not operator - ~
    // Ex- x = ~(5)
    // First it will flip all number 
    // Check if it is negative - 2'complement 
    // Otherwise give result 

    int x = ~(-9);
    cout<<"Not Operator : "<<x;


    return 0 ;
}