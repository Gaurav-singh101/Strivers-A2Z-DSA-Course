#include <bits/stdc++.h>
using namespace std;


bool Target_BS(vector<vector<int>> Mat, int t) {
    int n = Mat.size();
    int m = Mat[0].size();
    int low = 0 ; int high = (n * m) - 1 ; 

    while(low <= high){
        int mid = (low + high) / 2 ;

        int row = mid / m ; 
        int col = mid % m ;

        if(Mat[row][col] == t){
            return true ;
        }else if(Mat[row][col] > t){
            high = mid - 1 ;
        }else{
            low = mid + 1 ;
        }
    }
    return false ;
}

int main() {
    vector<vector<int>> Mat = {
        {3, 4, 7, 9},
        {12, 13, 16, 18},
        {20, 21, 23, 29}
    };

    int target = 29;

    cout << "The target is found or not: " << Target_BS(Mat, target);

    return 0;
}
