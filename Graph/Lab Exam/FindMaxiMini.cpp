#include<bits/stdc++.h>
using namespace std ; 

struct MiniMax{
    int min ; 
    int max ;
};

MiniMax fun(vector<int>& arr , int low , int high){
    int n = arr.size() ; 
    MiniMax result , left , right ;

    if(low == high){
        result.min = result.max = arr[low];
        return result ;
    }

    if(low + 1 == high){
        if(arr[low] < arr[high]){
            result.min = arr[low] ;
            result.max = arr[high] ;
        }else{
            result.min = arr[high] ;
            result.max = arr[low] ;
        }
        return result ;
    }

    int mid = (low + high) / 2 ;

    left = fun(arr , low , mid);
    right = fun(arr , mid + 1 , high);

    result.min = min(left.min , right.min);
    result.max = max(left.max , right.max);

    return result ;
}

int main(){

    vector<int> arr = {100 , 145 , 34 , 3 , 0};
    int n = arr.size();
    MiniMax Res = fun(arr , 0 , n - 1);

    cout<<"Maximum in array : "<<Res.max<<endl;
    cout<<"Minimum in array : "<<Res.min ;

    return 0 ;
}
