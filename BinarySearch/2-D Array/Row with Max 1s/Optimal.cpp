#include<bits/stdc++.h>
using namespace std ;

int LowerBound(vector<int> arr , int n , int x){
    int low = 0 ; int high = n - 1 ; 
    int ans = n ;
    while(low <= high){
        int mid = (low + high) / 2 ;

        if(arr[mid] >= x){
            ans = mid ; 
            high = mid - 1 ;
        }else{
            low = mid + 1;
        }
    }
    return ans ;
}

int MaxOne(vector<vector<int>> Arr , int n , int m){
    int index = -1 ; 
    int max_count = 0;

    for(int i = 0 ; i < n ; i++){
        int count = m - LowerBound(Arr[i] , m , 1);
        if(count > max_count){
            max_count = count ; 
            index = i ;
        }
    }
    return index ;
}

int main(){

    vector<vector<int>> Arr = {
        {0 , 0 , 0 , 1 , 1} , 
        {0 , 0 , 1 , 1 , 1} ,
        {0 , 1 , 1 , 1 , 1} ,
        {0 , 0 , 0 , 0 , 0} ,
        {0 , 1 , 1 , 1 , 1} 
    };

    int n = Arr.size();
    int m = Arr[0].size();

    cout<<"MAX number of 1s in a row : "<<MaxOne(Arr , n , m);

    return 0 ;
}