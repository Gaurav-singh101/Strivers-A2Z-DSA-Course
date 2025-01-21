#include<bits/stdc++.h>
using namespace std ; 

bool Target(vector<vector<int>> Mat , int t){
    
    int n = Mat.size();
    int m = Mat[0].size();

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            if(Mat[i][j] == t){
                return true ;
            }
        }
    }
    return false ;
}

int main(){

    vector<vector<int>> Mat = {
        {3 , 4 , 7 , 9},
        {12 , 13 , 16 , 18},
        {20 , 21 , 23 , 29}
    };

    int target = 23 ;

    cout<<"The target is found or not : "<<Target(Mat , target);

    return 0 ;
}