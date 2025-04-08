#include <iostream>
using namespace std;

int  BinarySearch(int arr[], int n, int key) {
    int low = 0 ; 
    int high = n - 1 ;

    while(low <= high){
        int mid = (low + high) / 2 ;

        if(arr[mid] == key){
            return mid ;
        }else if(arr[mid] > key){
            high = mid - 1;
        }else{
            low = mid + 1 ;
        }
    }
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;

    cout << "Enter the element to search: ";
    cin >> key;

    int result = BinarySearch(arr, n, key);

    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found in the array." << endl;

    return 0;
}
