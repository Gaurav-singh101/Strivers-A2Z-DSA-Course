#include <bits/stdc++.h>
using namespace std;

int BinarySearch(vector<int> arr, int x) {
    int n = arr.size();
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] > x) {
            high = mid - 1;
        } else if (arr[mid] == x) {
            return mid ;
        } else {
            low = mid + 1;
        }
    }
    return -1; 
}

vector<int> Target(vector<vector<int>> Mat, int t) {
    int n = Mat.size();
    int m = Mat[0].size();

    for (int i = 0; i < n; i++) {
            int res = BinarySearch(Mat[i], t);
            if(res != -1){
                return { i , res} ;
            }
    }
    return {-1 , -1};
}

int main() {
    vector<vector<int>> Mat = {
        {1 , 4 , 7 , 11 , 15},
        {2 , 5 , 8 , 12 , 19},
        {3 , 6 , 9 , 16 , 22},
        {10 , 13 , 14 , 17 , 24},
        {18 , 21 , 23 , 26 , 30}
    };

    int target = 30;


    vector<int> res = Target(Mat , target);

    if(res[0] && res[1] == -1){
         cout<<"Not Found";
    }else{
        cout<<"The target is found (index of the number) is : "<<res[0]<<" , "<<res[1];
    }

    return 0;
}
