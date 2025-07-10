#include<bits/stdc++.h>
using namespace std ; 

int sumofArr(vector<int> arr){
    int sum = 0 ; 
    for(int i = 0 ; i < arr.size() ; i++){
        sum += arr[i];
    }
    return sum ;
}

int fun(vector<int> arr , int pages){
    int stu = 1 ; int pagestu = 0;

    for(int i = 0  ; i < arr.size() ; i++){
        if(pagestu + arr[i] <= pages){
            pagestu += arr[i];
        }else{
            stu++ ; 
            pagestu += arr[i];
        }
    }
    return stu ;
}

int AllocatePage(vector<int> arr , int stu){
    int low = *max_element(arr.begin() , arr.end());
    int high = sumofArr(arr);

    while(low <= high){
        int mid = (low + high) / 2 ;
        if(fun(arr , mid) > stu){
            low = mid + 1;  
        }else{
            high = mid - 1;
        }
    }
    return low ;
}

int main(){

    vector<int> arr = {25 , 46 , 28 , 49 , 24};
    int stu = 4 ;

    cout<<"The number of pages required : "<<AllocatePage(arr , stu);


    return 0 ;
}