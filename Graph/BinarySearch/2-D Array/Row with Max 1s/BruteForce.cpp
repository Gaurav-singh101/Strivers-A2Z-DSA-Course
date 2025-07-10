#include<bits/stdc++.h>
using namespace std ; 

int FindRow(vector<vector<int>> Mat){
    int n = Mat.size();
    int m = Mat[0].size();
    int ind = -1 ; 
    int max_cnt = -1 ;
    for(int i = 0 ; i < n ; i++){
        int  count = 0 ;
        for(int j = 0 ; j < m ; j++){
            count += Mat[i][j];
        }
        if(count > max_cnt){
            max_cnt = count ;
            ind = i ;
        }
    }
    return ind ;
}

int main(){

    vector<vector<int>> Mat = {
    {0, 0, 1, 1, 1},
    {0, 0, 0, 0, 0},
    {0, 1, 1, 1, 1},
    {0, 0, 0, 1, 1},
    {0, 1, 1, 1, 1}
};

cout<<"Row with maximum 1s is "<<FindRow(Mat);

    return 0 ; 
}