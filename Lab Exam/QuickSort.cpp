#include<bits/stdc++.h>
using namespace std ; 

int fun(vector<int>& arr , int low , int high){
    int pivot = arr[low];
    int i = low + 1 ; 
    int j = high ; 

    while(i < j){
        while(arr[i] <= pivot && i <= high){
            i++;
        }
        while(arr[j] > pivot && j >= low){
            j--;
        }

        if(i < j){
            swap(arr[i] , arr[j]);
        }
    }

    swap(arr[low] , arr[j]);

    return j ;
}

void qs(vector<int>& arr , int low , int high){
    
    if(low < high){
        int pInd = fun(arr , low , high);
        qs(arr , low , pInd - 1);
        qs(arr , pInd + 1 , high);
    }
}

int main(){

    vector<int> arr = { 1 , 99 , 2 , 2 , 2 , 2 , 2  , 5 , 19 , 8 , 0};
    int n = arr.size();

    qs(arr , 0 , n - 1);


    cout<<"Sorted Array : ";
    for(int i = 0 ;  i < n ; i++){
        cout<<arr[i]<<" ";
    }

    return 0 ;
}
