//// Every number the right should bs smaller 

///////// Brute force solution  //////////////


// #include<bits/stdc++.h>
// using namespace std;

// // Function to find the leaders in the array
// vector<int> leader(vector<int> arr) {
//     int n = arr.size();
//     vector<int> result;


//     for (int i = 0; i < n; i++) {
//         bool isLeader = true;  
//         for (int j = i + 1; j < n; j++) {
//             if (arr[j] > arr[i]) {
//                 isLeader = false;  // If a larger element is found, it's not a leader
//                 break;
//             }
//         }
//         if (isLeader) {
//             result.push_back(arr[i]);  // Only add to result if it's a leader
//         }
//     }

//     return result;
// }

// int main() {
//     vector<int> arr = {2, 4, 5, 3, 2, 5, 1, 0};

//     vector<int> leaders = leader(arr);

//     // Print the leaders
//     for (auto it : leaders) {
//         cout << it << " , ";
//     }

//     return 0;
// }


/////////////////////   Optimal solution   /////////////////////




#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

// Function to find the leaders in the array
vector<int> leaders(int n, int arr[]) {
    int maxi = INT_MIN;  // Initialize the maximum to the smallest possible integer
    vector<int> result;  // Vector to store the leaders

    // Traverse the array from right to left
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] >= maxi) {
            result.push_back(arr[i]);  // If arr[i] is greater than or equal to maxi, it's a leader
            maxi = arr[i];             // Update maxi to the current element
        }
    }

    // Reverse the result vector to maintain the original left-to-right order
    reverse(result.begin(), result.end());

    return result;  // Return the result containing leaders
}

int main() {
    int n;

    // Input: size of the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];

    // Input: elements of the array
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Find and display the leaders
    vector<int> result = leaders(n, arr);

    cout << "Leaders in the array are: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
