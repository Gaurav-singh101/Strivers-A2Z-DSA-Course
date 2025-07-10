#include<bits/stdc++.h>
using namespace std ; 

int missing(vector<int> arr , int k){

    for(int i = 0 ; i < arr.size() ; i++){
        if(arr[i] <= k){
            k++ ; 
        }else{
            break;  
        }
    }
    return k ;
}

int main(){

    vector<int> arr = {2 , 3 , 7 , 4 , 11} ;
    int k = 5 ;

    cout<<"Kth missing term is : "<<missing(arr  , k);

    return 0 ;
}