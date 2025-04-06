// Find the Majority Element that occurs more than N/2 times


#include<bits/stdc++.h>
using namespace std ; 

int Majority(vector<int>& arr){
    int n = arr.size() ;
    int el = -1; 
    int cnt = 0 ;

    for(int i = 0 ; i < n ; i++){
        if(cnt == 0){
            el = arr[i];
            cnt++ ;
        }else if(el == arr[i]){
            cnt++ ; 
        }else{
            cnt-- ;
        }
    }

    int cnt2 = 0 ;
    for(int i = 0 ; i < n ; i++){
        if(arr[i] == el){
            cnt2++;
        }

        if(cnt2 > n / 2){
            return el ;
        }
    }

    return -1 ;
}

int main(){

    vector<int> arr = {2, 1, 5, 5, 5, 5, 6, 6, 6, 6, 6 , 6 , 6};

    cout<<"Find the Majority Element that occurs more than N/2 times : "<<Majority(arr);

    return 0 ;
}