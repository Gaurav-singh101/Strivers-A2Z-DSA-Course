// #include <iostream>
// using namespace std;


// void Reverse_Array(int arr[], int i, int n) {
//     if (i >= n/2) return; 
//     swap(arr[i], arr[n-i-1]); 
//     Reverse_Array(arr, i + 1, n);
// };

// int main() {
//     int arr[10];

//     cout << "Enter array elements: \n";
//     for (int i = 0; i < 10; i++) {
//         cin >> arr[i];
//     }


//     Reverse_Array(arr, 0, 9);

//     cout << "Reversed Array: \n";
//     for (int i = 0; i < 10; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }


// #include<iostream>
// using namespace std;

// void r(int arr[], int i, int n) {
//     if (i >= n / 2) return;
//     swap(arr[i], arr[n-1-i]);
//     r(arr, i + 1, n); // Recursive call to reverse the next pair
// }

// int main() {
//     int arr[10];
//     int n = 10;

//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     r(arr, 0, n); // Corrected function call with i=0

//     // Printing the reversed array
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }
