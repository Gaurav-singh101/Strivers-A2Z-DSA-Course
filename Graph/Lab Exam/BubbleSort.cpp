#include<bits/stdc++.h>
using namespace std ;

void Bubblesort(vector<int>& arr){
    int n = arr.size();

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n - i ; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j] , arr[j + 1]);
            }
        }
    }

}

int main(){


    vector<int> arr = {4 , 9 , 3 , 19 , 0};
      
    Bubblesort(arr);

    cout<<"Sorted Array : ";

    for(int i = 0 ; i < arr.size() ; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0 ;
}