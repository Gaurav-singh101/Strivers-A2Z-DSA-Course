#include<bits/stdc++.h>
using namespace std ;

void fun(vector<int>& arr , int low , int mid , int high){
    int left = low ; 
    int right = mid + 1;
    vector<int> temp ;

    while(left <= mid && right <=high){
        if(arr[left] < arr[right]){
            temp.push_back(arr[left]);
            left++;
        }else{
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(left <= mid){
        temp.push_back(arr[left]);
        left++;
    }

    while(right <= high){
        temp.push_back(arr[right]);
        right++ ;
    }
    
    for(int i = low ; i <= high ; i++){
        arr[i] = temp[i - low];
    }
}

void Mergesort(vector<int>& arr , int low , int high){
    int n = arr.size();

    if(low < high){
        int mid = (low + high) / 2 ;

        Mergesort(arr , low , mid);
        Mergesort(arr , mid + 1 , high);

        fun(arr , low , mid , high);
    }
}

int main(){


    vector<int> arr = {4 , 9 , 3 , 19 , 0};
    int n = arr.size();
    Mergesort(arr , 0 , n - 1);

    cout<<"Sorted Array : ";

    for(int i = 0 ; i < arr.size() ; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0 ;
}

