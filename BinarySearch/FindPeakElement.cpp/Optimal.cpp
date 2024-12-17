// Only for one peak 

#include<bits/stdc++.h>
using namespace std;

int OnePeak(vector<int> arr) {
    int n = arr.size();
    if (n == 1) return arr[0];
    if (arr[0] > arr[1]) return arr[0];
    if (arr[n - 1] > arr[n - 2]) return arr[n - 1];

    int low = 1, high = n - 2;
    while (low <= high) {
        int mid = (low + high) / 2;

        // Check if mid is a peak
        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]) {
            return arr[mid];
        }
        // If the right neighbor is greater, the peak lies to the right
        else if (arr[mid] < arr[mid + 1]) {
            low = mid + 1;
        }
        // Otherwise, the peak lies to the left
        else if(arr[mid] > arr[mid + 1]){
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 14, 8};
    cout << "One peak is: " << OnePeak(arr);
    return 0;
}
