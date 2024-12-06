//  Given Row and column value tell me number at this place

// formula to find this is  (R-1)^C(C-1)  ===  (nCr)  factorial


#include<iostream>
#include<bits/stdc++.h>
using namespace std ;

long long nCr(int N , int C){
    int n = N - 1;
    int r = C - 1;
    long long result = 1 ; 
    for(int i = 0 ; i  < r ; i++){
        result = result * (n - i);
        result = result / (i + 1);
    }

    return result ;
}

int main(){

    int row , column ;
    cout<<"Enter the row and column value for Pascal triangle element"<<endl;
    cout<<"Row : ";
    cin>>row;
    cout<<"\nColumn : ";
    cin>>column ;


    cout<<"\nThe element is : "<<nCr(row , column);


    return 0 ;
}