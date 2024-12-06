// Bubble sort = compare with adjacent element

// TIME  COMPLEXITY for Bubble sort in best case O(n) 
// wrost case & Avg. case O(n2)


#include<iostream>
using namespace std ; 

int sorted(int arr[] , int m){
    for(int i = 0 ; i < m ; i++){
        int didSwap = 0 ;
        for(int j = 0 ; j < m - i ; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j] , arr[j+1]);
                didSwap = 1 ;
            }
        }
        if(didSwap == 0){
            break;
        }  
    }
}
int main(){
    int n ;
    cout<<"Etner array number : ";
    cin>>n ;
    int arr[n];
    cout<<endl<<"Enter Array Element : "<<endl ;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    sorted(arr , n);
    cout<<"Sorted Array"<<endl ;
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" , ";
    }
    return 0 ;
}