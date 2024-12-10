#include <bits/stdc++.h>
using namespace std;

vector<int> floorCeil(vector<int> &arr, int target) {
    int n = arr.size();

    int low = 0;
    int high = n - 1;
    int floor = -1, ceil = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target) {
            floor = ceil = arr[mid];
            break; 
        } else if (arr[mid] > target) {
            high = mid - 1;
            ceil = arr[mid];
        } else {
            low = mid + 1;
            floor = arr[mid];
        }
    }
    return {floor, ceil};
}

int main() {
    vector<int> arr = {10, 20, 30, 40, 50};
    int target = 25;

    vector<int> result = floorCeil(arr, target);

    cout << "Result: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
