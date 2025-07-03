
// Using left sift 

#include<bits/stdc++.h>
using namespace std ;

int main(){

    int num = 13 ; 
    int ith_Bit = 2 ;

    if((num & (1 << ith_Bit)) != 0){
        cout<<"Set";
    }else{
        num = num | (1 << ith_Bit);
        cout<<"Number After set : "<<num ;
    }

    return 0 ;
}