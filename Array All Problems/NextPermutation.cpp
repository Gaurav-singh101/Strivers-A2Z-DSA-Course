#include<bits/stdc++.h>
using namespace std;

vector<int> permutation(vector<int> arr) {
    int ind = -1;
    int n = arr.size();

    // Step 1: Find the first decreasing element from the right
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] < arr[i + 1]) {
            ind = i;
            break;
        }
    }

    // Step 2: If no such element is found, reverse the entire array (last permutation case)
    if (ind == -1) {
        reverse(arr.begin(), arr.end());
        return arr;
    }

    // Step 3: Find the element just larger than arr[ind] and swap
    for (int i = n - 1; i > ind; i--) {
        if (arr[i] > arr[ind]) {
            swap(arr[i], arr[ind]);
            break;
        }
    }

    // Step 4: Reverse the elements after ind to get the smallest permutation
    reverse(arr.begin() + ind + 1, arr.end());

    return arr;
}

int main() {
    vector<int> arr = {2, 1, 5, 4, 3, 0, 0};

    arr = permutation(arr);

    // Print the array correctly
    for (auto it : arr) {
        cout << it << " , ";
    }

    return 0;
}
