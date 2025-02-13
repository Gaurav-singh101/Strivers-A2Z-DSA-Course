// #include <iostream>
// #include <vector>
// using namespace std;

// int partition(vector<int> &arr, int low, int high) {
//     int pivot = arr[low];  // Choosing the first element as pivot
//     int i = low;  // Start from the low end
//     int j = high;  // Start from the high end
    
//     while (i < j) {
//         // Move the left pointer `i` until an element larger than pivot is found
//         while (arr[i] <= pivot && i <= high - 1) {
//             i++;
//         }
//         // Move the right pointer `j` until an element smaller than or equal to pivot is found
//         while (arr[j] > pivot && j >= low + 1) {
//             j--;
//         }
//         // Swap elements if `i` is still less than `j`
//         if (i < j) {
//             swap(arr[i], arr[j]);
//         }
//     }
//     // Place the pivot in the correct position
//     swap(arr[low], arr[j]);
//     return j;
// }

// void quickSortHelper(vector<int> &arr, int low, int high) {
//     if (low < high) {
//         int pIndex = partition(arr, low, high);  // Partition the array and get the pivot index
//         quickSortHelper(arr, low, pIndex - 1);   // Recursively sort elements before the pivot
//         quickSortHelper(arr, pIndex + 1, high);  // Recursively sort elements after the pivot
//     }
// }

// vector<int> quickSort(vector<int> arr) {
//     quickSortHelper(arr, 0, arr.size() - 1);  // Call the helper function to sort the entire array
//     return arr;
// }

// int main() {
//     vector<int> arr = {29, 10, 14, 37, 13};  // Sample array to sort
//     arr = quickSort(arr);  // Sort the array using quickSort
    
//     cout << "Sorted array: ";
//     for (int i = 0; i < arr.size(); i++) {  // Output the sorted array
//         cout << arr[i] << " ";
//     }
//     cout << endl;
    
//     return 0;
// }






////////////////////////////////////////////////////////////






#include<bits/stdc++.h>
using namespace std ; 

int fun(vector<int> &arr , int low , int high){
    int pivot = arr[low];
    int i = low ; 
    int j = high ;

    while(i < j){
        while(arr[i] <= pivot && i <= high - 1){
            i++ ;
        }
        while(arr[j] > pivot && j >= low + 1){
            j-- ;
        }
        if(i < j){
        swap(arr[i] , arr[j]);
        }
    }

    swap(arr[low] , arr[j]);


    return j ;
}

vector<int> qs(vector<int> &arr , int low , int high){
    if(low < high){
       int  pInd = fun(arr , low , high);
       qs(arr , low , pInd - 1);
       qs(arr , pInd + 1 , high);
    }

    return arr ;
}

int main(){

    vector<int> arr = {4 , 6  , 2 , 5 , 7 , 9 , 1 , 3};

    int n = arr.size();

    arr = qs(arr , 0 , n - 1);

    for(auto it : arr){
        cout<<it<<" ";
    }

    cout<<endl ;

    return 0 ;
}


