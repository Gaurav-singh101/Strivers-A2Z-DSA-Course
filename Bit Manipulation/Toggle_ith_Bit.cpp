
// Using left sift 

#include<bits/stdc++.h>
using namespace std ;

int main(){

    int num = 13 ; 
    int ith_Bit = 1;

    num = num ^ (1 << ith_Bit);

    cout<<"After Toggle : "<<num ;


    return 0 ;
}