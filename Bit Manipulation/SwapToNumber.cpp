#include<bits/stdc++.h>
using namespace std ;

int main(){
    int a = 5 , b = 9 ; 

    cout<<"a - "<<a<<" And "<<"b - "<<b<<endl ; 

    a = a ^ b ; 
    b = a ^ b ; 
    a = a ^ b ; 

    cout<<"After swap number is : - "<<endl ; 

    cout<<"a - "<<a<<" And "<<"b - "<<b<<endl ; 

    return 0 ; 
}