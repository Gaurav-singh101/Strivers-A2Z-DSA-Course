#include <bits/stdc++.h>
using namespace std;

int Result(vector<int> arr) {
    int n = arr.size();
    int count = 0;

    if (n == 1) return 1; // A single element is always a peak

    for (int i = 0; i < n; i++) {
        if (i == 0 && arr[i] > arr[i + 1]) { // Check for the first element
            count++;
        } else if (i == n - 1 && arr[i] > arr[i - 1]) { // Check for the last element
            count++;
        } else if (i > 0 && i < n - 1 && arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) { // Check middle elements
            count++;
        }
    }

    return count;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 3, 6, 7, 8, 5, 1};

    cout << "The number of peak element is : " << Result(arr) << endl;

    return 0;
}
