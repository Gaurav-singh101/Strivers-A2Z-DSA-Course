//  Take element and places it correct position 
// Best case - O(n)
// Wrost & Avg. case - O(n2)


#include<iostream>
using namespace std ; 

int sorted(int arr[] , int n){
    for(int i = 0 ; i <= n-1; i++){
        int j = i ; 
        while(j > 0 && arr[j-1] > arr[j]){
            swap(arr[j-1] , arr[j]);

            j--;
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