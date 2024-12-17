// Time complexity - O(n)

#include<bits/stdc++.h>
using namespace std; 

int SingleElement(vector<int> &arr) {
    int n = arr.size();

    if (n == 1) return arr[0];

    for(int i = 0; i < n; i++) {

        if (i == 0) {
            if (arr[i] != arr[i + 1]) return arr[i];
        }
        else if (i == n - 1) {
            if (arr[i] != arr[i - 1]) return arr[i];
        }
        else {
            if (arr[i] != arr[i + 1] && arr[i] != arr[i - 1]) return arr[i];
        }
    }

    return -1;
}

int main() {
    vector<int> arr = {1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6};
    cout << "The number is: " << SingleElement(arr);

    return 0;
}
