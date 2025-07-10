#include<bits/stdc++.h>
using namespace std ;

int main(){

    int num = 13 ; 
    int ith_Bit = 2 ;

    num = num & ~(1 << ith_Bit);

    cout<<num;

    return 0 ;
}