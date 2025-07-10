#include<bits/stdc++.h>
using namespace std ; 

int reversecount(vector<int> arr){
    int count = 0 ;
    int n = arr.size();

    for(int i = 0 ; i < n ; i++){
        for(int j = i + 1 ; j < n ; j++){
            if(arr[i] > 2*arr[j]){
                count++ ; 
            }
        }
    }
    return count ;
}

int main(){

    vector<int> arr = {40 , 25 , 19 , 12 , 9 , 6 ,2};

    cout<<"Count is : "<<reversecount(arr);


    return 0 ;
}