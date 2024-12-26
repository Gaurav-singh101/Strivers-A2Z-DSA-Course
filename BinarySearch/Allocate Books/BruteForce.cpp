#include<bits/stdc++.h>
#include <algorithm>

using namespace std ; 

int sumofArr(vector<int> arr){
    int sum = 0 ;  
    for(int i = 0 ; i  < arr.size() ; i++){
        sum += arr[i];
    }
    return sum ;
}

int fun(vector<int> arr , int pages){
    int stu = 1 ; int pagesstu = 0 ;

    for(int i = 0 ; i < arr.size(); i++){
        if(pagesstu + arr[i] <= pages){
            pagesstu += arr[i];
        }else{
            stu++ ; 
            pagesstu = arr[i];
        }
    }
    return stu ;
}

int Allocation(vector<int> arr , int stu){
     int low = *max_element(arr.begin() , arr.end());
     int high = sumofArr(arr);

     for(int pages = low ; pages < high ; pages++){
        int cntStu = fun(arr , pages);
        if(cntStu == stu){
            return pages ;
        }
     }
     return -1 ;
}

int main(){

    vector<int> arr = {25 , 46 , 28 , 49 , 24};
    int stu = 4;

    cout<<"Maximum number of pages : "<<Allocation(arr , stu);


    return 0 ;
}