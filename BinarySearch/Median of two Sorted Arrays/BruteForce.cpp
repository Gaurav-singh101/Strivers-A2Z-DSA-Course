#include <bits/stdc++.h>
using namespace std;

int median(vector<int> arr1, vector<int> arr2) {

    vector<int> arr3;
    int n = 0, m = 0;

    while (n < arr1.size() && m < arr2.size()) {
        if (arr1[n] < arr2[m]) {
            arr3.push_back(arr1[n]);
            n++;
        } else if (arr1[n] == arr2[m]) {
            arr3.push_back(arr1[n]);
            arr3.push_back(arr2[m]);
            n++;
            m++;
        } else {
            arr3.push_back(arr2[m]);
            m++;
        }
    }

    while (n < arr1.size()) {
        arr3.push_back(arr1[n]);
        n++;
    }

    while (m < arr2.size()) {
        arr3.push_back(arr2[m]);
        m++;
    }
    int a = arr3.size();
    cout << "Size of merged array: " << a << endl;

    int mid;
    if (a % 2 == 0) {
        mid = (arr3[a / 2] + arr3[(a / 2) - 1]) / 2;
    } else {
        mid = arr3[a / 2];
    }

    return mid;
}

int main() {
    vector<int> arr1 = {1, 3 , 4 , 7 , 10 , 12};
    vector<int> arr2 = {2 , 3 , 6 , 15};

    cout << "The median of the sorted array is: " << median(arr1, arr2) << endl;

    return 0;
}
