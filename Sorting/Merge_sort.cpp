#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& arr, int low, int mid, int high) {
    vector<int> temp; 
    int left = low; 
    int right = mid + 1; 
    while(left <= mid && right <= high) {
        if(arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else { 
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left <= mid) {
        temp.push_back(arr[left]);
        left++; 
    }
    while(right <= high) {
        temp.push_back(arr[right]);
        right++; 
    }

    for(int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

void mS(vector<int>& arr, int low, int high) {
    if(low >= high) return;
    int mid = (low + high) / 2; 
    mS(arr, low, mid); 
    mS(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

int main() {
    vector<int> arr(10); 

    cout << "Enter array elements: " << endl;
    for(int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    mS(arr , 0 , arr.size() - 1);

    cout << "Sorted array: " << endl;
    for(int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
