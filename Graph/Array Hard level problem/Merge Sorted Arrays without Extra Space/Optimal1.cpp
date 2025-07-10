#include<bits/stdc++.h>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m) {

    int left = n - 1 ;
    int right = 0;
    while(left >= 0 && right < m){
        if(arr1[left] > arr2[right]){
            swap(arr1[left] , arr2[right]);
            left--;
            right++;
        }else{
            break;
        }
    }
    sort(arr1 , arr1 + n);
    sort(arr2 , arr2 + m);
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
