#include<bits/stdc++.h>
using namespace std;

void swapIfRequired(int& a, int& b) {
    if (a > b) {
        swap(a, b);
    }
}

void merge(int arr1[], int n, int arr2[], int m) {
    int len = n + m;
    int gap = (len / 2) + (len % 2);

    while (gap > 0) {
        int left = 0;
        int right = left + gap;
        while (right < len) {
            // left in arr1 and right in arr2
            if (left < n && right >= n) {
                swapIfRequired(arr1[left], arr2[right - n]);
            }
            // both in arr2
            else if (left >= n) {
                swapIfRequired(arr2[left - n], arr2[right - n]);
            }
            // both in arr1
            else {
                swapIfRequired(arr1[left], arr1[right]);
            }
            left++;
            right++;
        }
        if (gap == 1) break;
        gap = (gap / 2) + (gap % 2);
    }
}

int main() {
    int arr1[] = {1, 6, 2, 4, 9};
    int arr2[] = {0, 8, 7, 5};

    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);

    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);

    merge(arr1, n, arr2, m);

    cout << "Array 1 after merging: ";
    for (int i = 0; i < n; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    cout << "Array 2 after merging: ";
    for (int i = 0; i < m; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    return 0;
}
