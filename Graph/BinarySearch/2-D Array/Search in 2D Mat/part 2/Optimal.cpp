#include<bits/stdc++.h>
using namespace std ;

vector<int> Target(vector<vector<int>> Mat , int t){
    int n = Mat.size();
    int m = Mat[0].size();
    int row = 0 ; 
    int col = m - 1;

    while(row < n && col >= 0){
        if(Mat[row][col] == t){
            return {row , col};
        }else if(Mat[row][col] > t){
            col--;
        }else{
            row++;
        }
    }
    return {-1 , -1};
}

int main(){

        vector<vector<int>> Mat = {
        {1 , 4 , 7 , 11 , 15},
        {2 , 5 , 8 , 12 , 19},
        {3 , 6 , 9 , 16 , 22},
        {10 , 13 , 14 , 17 , 24},
        {18 , 21 , 23 , 26 , 30}
    };

       int target = 14;


    vector<int> res = Target(Mat , target);

    if(res[0] && res[1] == -1){
         cout<<"Not Found";
    }else{
        cout<<"The target is found (index of the number) is : "<<res[0]<<" , "<<res[1];
    }

    return 0 ; 
}