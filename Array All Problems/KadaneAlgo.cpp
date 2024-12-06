/////////////  Maximum subarray   //////////////

// #include<iostream>
// #include<vector>
// using namespace std;

// void maxSub(vector<int> arr){

//     int maxx = arr[0];
//     for(int i = 0 ; i < arr.size() ; i++){
//         int sum = 0;
//         for(int j = i ; j < arr.size() ; j++){
//             sum += arr[j];
//             maxx = max(sum , maxx);
//         }
//     }
//             cout<<"Maximum sum  array is : "<<maxx;
// }

// int main(){
//     vector<int> arr = {-2, -3, 4, -1, -2, 1, 5, -3}; 

//     maxSub(arr);

//     return 0;
// }



//////////////////////////  Optimal Solution   /////////////////


#include<iostream>
#include<vector>
using namespace std;

void maxSub(vector<int> arr){

    int maxx = arr[0];       // Initialize maximum sum to the first element
    int sum = 0;             // Initialize sum to 0
    int ans_start = -1;      // Start index of the max sum subarray
    int ans_end = -1;        // End index of the max sum subarray
    int temp_start = 0;      // Temporary start index for the current subarray

    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];

        if (sum > maxx) {
            maxx = sum;
            ans_start = temp_start; // Update start index when max sum is updated
            ans_end = i;            // Update end index to current position
        }

        if (sum < 0) {
            sum = 0;
            temp_start = i + 1; // Reset start index to the next element
        }
    }

    // Output the result
    cout << "Maximum sum subarray is: " << maxx << endl;
    cout << "Subarray starts at index: " << ans_start << " and ends at index: " << ans_end << endl;
}

int main(){
    vector<int> arr = {-2, -3, 4, -1, -2, 1, 5, -3}; 

    maxSub(arr);

    return 0;
}
