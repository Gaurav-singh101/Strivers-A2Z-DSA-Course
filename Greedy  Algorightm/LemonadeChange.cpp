#include<bits/stdc++.h>
using namespace std ; 

bool lemonadeChange(vector<int>& bills) {
    int five = 0 , ten = 0 ; 

    for(int i = 0 ; i < bills.size() ; i++){
        if(bills[i] == 5){
            five++ ;
        }else if(bills[i] == 10){
            if(five){
                five-- ; 
                ten++ ;
            }else{
                return false ;
            }
        }else{
            if(five && ten){
                five-- ; 
                ten-- ;
            }else if(five >= 3){
                five = five - 3 ;
            }else{
                return false ;
            }
        }
    }
    return true ;
}

int main(){

    vector<int> bills = {5 , 5 , 5 , 10 , 20};

    cout<<lemonadeChange(bills);


    return 0 ;
}