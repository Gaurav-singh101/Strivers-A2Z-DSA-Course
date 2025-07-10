#include<bits/stdc++.h>
using namespace std;

 
int merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp;
    int left = low;
    int right = mid + 1;
    int cnt = 0;

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            cnt += (mid - left + 1);  // Count inversions
            right++;
        }
    }

    // Copy remaining elements
    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // Copy sorted temp back to original array
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }

    return cnt;
}

int mergeSort(vector<int> &arr, int low, int high) {
    if (low >= high) return 0;

    int mid = (low + high) / 2;
    int cnt = 0;
    cnt += mergeSort(arr, low, mid);
    cnt += mergeSort(arr, mid + 1, high);
    cnt += merge(arr, low, mid, high);

    return cnt;
}

int inversionCount(vector<int> &arr) {
    int n = arr.size();
    return mergeSort(arr, 0, n - 1);
}

int main(){

    vector<int> arr = {5 , 3 , 2 , 4 , 1};

    int result = inversionCount(arr);

cout<<"Count Inversion : "<<result;

    return 0 ;
}