#include<bits/stdc++.h>
using namespace std ; 

int maxelement(vector<vector<int>> arr , int n , int mid){
    int ind = -1 ;
    int maxvalue = -1 ;
    for(int i = 0 ; i < n ; i++){
        if(arr[i][mid] > maxvalue){
            maxvalue = arr[i][mid];
            ind = i;
        }
    }
    return ind ;
}

vector<int> Peek(vector<vector<int>> arr){
    int n = arr.size();
    int m = arr[0].size();
    int low = 0 ;
    int high = m - 1;

    while(low <= high){
        int mid = (low + high) / 2 ;
        int row = maxelement(arr , n , mid);
        int left = mid - 1 >= 0 ? arr[row][mid -1] : -1 ;
        int right = mid + 1 < m ? arr[row][mid + 1] : -1 ;

        if(arr[row][mid] > left && arr[row][mid] > right){
            return {row , mid};
        }else if(arr[row][mid] < left){
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }

    return {-1 , -1} ;
}

int main(){

    vector<vector<int>> Mat = {
        {4 , 2 , 5 , 1 , 4 , 5},
        {2 , 9 , 3 , 2 , 3 , 2},
        {1 , 7 , 6 , 0 , 1 , 3},
        {3 , 6 , 2 , 3 , 7 , 2}
    };

    vector<int> res = Peek(Mat);

    cout<<"The peak element is : "<<res[0]<<" , "<<res[1];

    return 0 ;
}