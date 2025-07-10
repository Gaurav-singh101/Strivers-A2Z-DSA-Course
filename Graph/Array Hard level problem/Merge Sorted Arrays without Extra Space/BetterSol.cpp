#include<bits/stdc++.h>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m) {

    long long arr3[n + m];
    int left = 0; 
    int right = 0; 
    int index = 0;

    while (left < n && right < m) {
        if (arr1[left] <= arr2[right]) {
            arr3[index++] = arr1[left++];
        } else {
            arr3[index++] = arr2[right++];
        }
    }

    while (left < n) {
        arr3[index++] = arr1[left++];
    }

    while (right < m) {
        arr3[index++] = arr2[right++];
    }


    for (int i = 0; i < n; i++) {
        arr1[i] = arr3[i];
    }
    for (int i = 0; i < m; i++) {
        arr2[i] = arr3[n + i];
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
