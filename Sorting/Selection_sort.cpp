#include<iostream>
using namespace std ; 

int sorted(int arr[] , int m){
    for(int i = 0 ; i < m ; i++){
        int min = i;
        for(int j = i ; j < m ; j++){
            if(arr[j] < arr[min]){
                min = j ;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp ; 
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