#include<bits/stdc++.h>
using namespace std ;

int Result(vector<int> arr){
    int n = arr.size();
    int count = 0 ;
    
    if(n == 1)return 1 ;

    for(int i = 0 ; i < n ; i++){
        if(i == 0 && arr[i] > arr[i + 1]) count++;
        if(i == n - 1 && arr[n - 1] > arr[n - 2]) count++;
        if(arr[i - 1] < arr[i] && arr[i] > arr[i + 1]){
            count++;
        }
    }
    return count ;
}

int main(){

vector<int> arr = {1 ,2 ,3 ,4 ,3 ,6, 7, 8, 5, 1};

cout<<"Result is "<<Result(arr);


    return 0 ;
}