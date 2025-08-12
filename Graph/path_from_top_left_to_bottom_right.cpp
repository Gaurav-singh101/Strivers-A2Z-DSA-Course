// Question - Given a matrix arr[][] of size M * N, where arr[i][j] represents the height of the cell (row, col). 
// The task is to find a path from top-left to bottom-right such that the value of the maximum difference in 
// height between adjacent cells is minimum for that path.

// Note: A path energy is the maximum absolute difference in heights between two consecutive cells of the path.


#include<bits/stdc++.h>
using namespace std ; 


bool isbool(int i , int j , vector<vector<int>>& mat , vector<vector<bool>>& vis , int mid , int parent){
    int n = mat.size();
    int m = mat[0].size();

    if(i < 0 || j < 0 || i >= n || j >= m || abs((long long)mat[i][j] - parent) > mid || vis[i][j]){
        return false ;
    }

    if(i == n - 1 && j == m - 1){
        return true ;
    }

    vis[i][j] = true ; 

    int delRow[] = {1 , 0 , -1 , 0};
    int delCol[] = {0 , -1 , 0 , 1};

    for(int k = 0 ; k < 4 ; k++){
        int newI = i + delRow[k] ; 
        int newJ = j + delCol[k] ; 

        if(isbool(newI , newJ , mat , vis , mid , mat[i][j])){
            return true ; 
        }
    }
    return false ; 
}


int miniFun(vector<vector<int>>& mat){
    int n = mat.size() ; 
    int m = mat[0].size() ; 

    int low = 0 , high = 10000 ; 
    int res = mat[0][0];

    while(low <= high){
        vector<vector<bool>> vis(n , vector<bool>(m , false));
        int mid = (low + high) / 2 ; 
        if(isbool(0 , 0 , mat , vis , mid , mat[0][0])){
            res = mid ; 
            high = mid - 1 ;
        }else{
            low = mid + 1 ;
        }
    }
    return res ;
}

int main(){

    vector<vector<int>> mat = {
        {1 , 2 , 1},
        {2 , 8 , 2},
        {2 , 4 , 2}
    };

    cout<<"Minimize maximum adjacent difference in a path from top-left to bottom-right : "<<miniFun(mat);

    return 0 ;
}