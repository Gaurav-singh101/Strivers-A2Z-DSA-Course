///////////////  Better solution  ///////////////////
// Time complexity O(n²)

// #include<bits/stdc++.h>
// using namespace std ;

// int Countsubarray(vector<int> arr , int k){
//   int count = 0;
//   int n = arr.size();

//   for(int i = 0 ; i < n ; i++){
//     int sum = 0 ;
//     for(int j = i ; j < n ; j++){
//         sum += arr[j];
//         if(sum == k){
//             count++;
//         }
//     }
//   }

// return count ;
// }

// int main(){

//     vector <int> arr = {1 , 2 , 3 , -3 , 1 , 1 , 1 , 4 , 2 , -3};

//     int k = 3 ; 

//     cout<<"The number of sun array is : "<<Countsubarray(arr , k);

//     return 0 ;
// }


//////////////////   Optimal solution  ////////////////
//Time complexity O (n)




#include<bits/stdc++.h>
using namespace std ;

    int subarraySum(vector<int>& nums, int k) {
        map<int , int> mpp;
        mpp[0] = 1 ;
        int presum = 0 ;
        int cnt = 0 ;
        for(int i = 0 ; i < nums.size() ; i++){
            presum += nums[i];
            int remove = presum - k ;
            cnt += mpp[remove];
            mpp[presum] += 1;
        }

        return cnt ;
    }

int main(){

    vector <int> arr = {1 , 2 , 3 , -3 , 1 , 1 , 1 , 4 , 2 , -3};

    int k = 3 ; 

    cout<<"The number of sun array is : "<<subarraySum(arr , k);

    return 0 ;
}






