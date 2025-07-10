// Find the Majority Element that occurs more than N/2 times

//  Using Hshing - Better Approch 

#include<bits/stdc++.h>
using namespace std ; 

int Majority(vector<int>& arr){
    int n = arr.size() ; 

    for(int i = 0 ; i < n ; i++){ 
        int cnt = 0 ; 
        for(int j = 0 ; j < n ; j++){
            if(arr[j] == arr[i]){
                cnt++ ;
            }
            if(cnt > n / 2){
                return arr[i];
            }
        }

    }
    return -1;
}

int main(){

    vector<int> arr = {2, 1, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6, 6};

    cout<<"Majority elements are : "<<Majority(arr);

    return 0 ;
}