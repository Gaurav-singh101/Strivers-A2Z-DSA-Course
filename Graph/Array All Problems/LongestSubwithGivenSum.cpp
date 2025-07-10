////// Longest subarray with given sum(Positive)

// #include<iostream>
// using namespace std;

// int main(){

//     int arr[10] = {14, 2, 3, 2, 1, 1, 1, 4, 15, 11};
//     int l = 0; 
//     int X = 10; 

//     for(int i = 0; i < 10; i++){
//         int sum = 0; 
//         for(int j = i; j < 10; j++){
//             sum += arr[j]; 
//             if(sum == X){
//                 l = max(l, (j - i + 1)); 
//             }
//         }
//     }

//     printf("Length: %d\n", l);

//     return 0;
// }




//////////////////////  Better solution  ///////////////


#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int lenOfLongSubarr(int A[], int N, int K) 
{ 
    unordered_map<int, int> preSumMap; // To store prefix sums and their first occurrence index
    int sum = 0; 
    int maxLen = 0; 

    for(int i = 0; i < N; i++) {
        sum += A[i];                         // Add current element to sum

                                            // If sum equals K, the subarray from 0 to i has sum K
        if(sum == K) {
            maxLen = i + 1;
        }

                                              // Check if there is a prefix sum that would make the sum of the subarray equal to K
        int rem = sum - K; 

                                             // If 'rem' has been seen before, calculate the length of the subarray
        if(preSumMap.find(rem) != preSumMap.end()) {
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);       // Update maxLen if we found a longer subarray
        }

                                            // Store the prefix sum in the map if it has not been stored already
        if(preSumMap.find(sum) == preSumMap.end()) {
            preSumMap[sum] = i;
        }
    } 
    return maxLen; 
}

int main() {
    int N, K;
    cout << "Enter the size of the array (N): ";
    cin >> N;

    cout << "Enter the value of K: ";
    cin >> K;

    int A[N];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int result = lenOfLongSubarr(A, N, K);
    cout << "The length of the longest subarray with sum " << K << " is: " << result << endl;

    return 0;
}
