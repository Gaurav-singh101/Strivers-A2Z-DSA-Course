// Brute force  solution 

// #include<iostream>
// using namespace std ; 

// int main(){
//     int arr[5] = {1 , 4 , 5 , 6 , 5};
//     int number = 10 ;
//     for(int i = 0 ; i < 5 ; i++){
//         for(int j = i ; j < 5 ; j++){
//             if(i == j)continue;
//             if(arr[i] + arr[j] == number){
//                 cout<<i<<" , "<<j;
//                 break;
//             }
//         }
//         cout<<endl;
//     }

//     return 0 ;
// }


//////    Better solution    //////////

// #include<iostream>
// #include<vector>
// #include<map>
// using namespace std;

// class Solution{
//     public:
//         vector<int> twoSum(vector<int>& nums, int target) {
//             map<int, int> mpp;
//             int n = nums.size();
//             for(int i = 0; i < n; i++) {
//                 int num = nums[i];
//                 int more = target - num;
//                 if(mpp.find(more) != mpp.end()) {
//                     return {mpp[more], i};
//                 }
//                 mpp[num] = i;
//             }
//             return { -1, -1 };
//         }
// };

// int main() {
//     Solution sol;
//     vector<int> nums = {15 , 11 , 7 , 2 };
//     int target = 9;
//     vector<int> result = sol.twoSum(nums, target);

//     cout << "Indices: " << result[0] << ", " << result[1] << endl;

//     return 0;
// }


///////////////    Optimal Approch   /////////////////



#include<iostream>
using namespace std ; 

int main(){

    int arr[5] = {2 ,5 ,6 ,8 ,11};

    int target = 14 ;

    int k = 5 ;
    for(int i = 0 ; i < 5 ; i++){
        if(arr[i] + arr[k] > target){
            k--;
            if(arr[i] + arr[k] == target){
                cout<<i<<" , "<<k<<endl;
            }
        }
        else if(arr[i] + arr[k] < target){
            continue;
        }else if(arr[i] + arr[k] == target){
                cout<<i<<" , "<<k<<endl;
        }
    }


    return 0 ;
}





