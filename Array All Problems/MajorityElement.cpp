/////////   Brute force solution  ///////////

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[7] = {2, 2, 3, 3, 1, 2, 2};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     cout<<n ;

//     for(int i = 0 ; i < n; i++){
//         int count = 0 ;
//         for(int j = 0 ; j < n ; j++){
//                 if(arr[i] == arr[j]){
//                     count++;
//                 }
//         }
//         if(count > n / 2){
//             cout<<"The number  is : "<<arr[i]<<endl;
//             break;
//         }
//     }
//     return 0 ;
// }


///////////////    Better solution     ////////////

// #include<bits/stdc++.h>
// using namespace std ;

// int majorityElement(vector<int> v ){
//     map<int , int>mpp;
//     int n = v.size();
//     for(int i = 0 ; i < n ; i++){
//         mpp[v[i]]++;
//     }

//     for(auto it : mpp){
//         if(it.second > (n / 2)){
//             return it.first ; 
//         }
//     }
//     return -1;
// }

// int main(){

//     vector<int> arr = {2, 2, 3, 3, 1, 2, 2};

//     cout<<"The number is : "<<majorityElement(arr);

//     return 0 ;
// }





/////////////  optimal solution  //////////////////////


#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 0;
        int el;

        // First pass: Boyer-Moore Voting Algorithm to find a candidate
        for (int i = 0; i < nums.size(); i++) {
            if (cnt == 0) {
                cnt = 1;
                el = nums[i];
            } else if (nums[i] == el) {
                cnt++;
            } else {
                cnt--;
            }
        }

        // Second pass: Verify if the candidate is indeed a majority element
        int cnt1 = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == el) cnt1++;
        }

        // Check if the candidate appears more than n/2 times
        if (cnt1 > nums.size() / 2) {
            return el;
        }
        return -1;  // No majority element found
    }
};

int main() {
    // Input array
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    
    // Create an instance of the solution class
    Solution sol;
    
    // Find and print the majority element
    int result = sol.majorityElement(nums);
    if (result != -1) {
        cout << "The majority element is: " << result << endl;
    } else {
        cout << "No majority element found." << endl;
    }

    return 0;
}
