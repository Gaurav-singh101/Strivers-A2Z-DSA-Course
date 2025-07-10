#include<bits/stdc++.h>
using namespace std ; 

vector<int> Target(vector<vector<int>> Mat , int t){
    
    int n = Mat.size();
    int m = Mat[0].size();

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            if(Mat[i][j] == t){
                return {i , j} ;
            }
        }
    }
    return {-1 , -1};
}

int main(){

    vector<vector<int>> Mat = {
        {3 , 4 , 7 , 9},
        {12 , 13 , 16 , 18},
        {20 , 21 , 23 , 29}
    };

    int target = 4 ;

    vector<int> res = Target(Mat , target);

    if(res[0] && res[1] == -1){
         cout<<"Not Found";
    }else{
        cout<<"The target is found (index of the number) is : "<<res[0]<<" , "<<res[1];
    }

    return 0 ;
}