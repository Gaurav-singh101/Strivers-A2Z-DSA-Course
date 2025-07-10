#include<bits/stdc++.h>
using namespace std ;

int fun(vector<int> &arr){
    int sum = 1 , i = 1 ; 

    while(i < arr.size()){
        if(arr[i] == arr[i - 1]){
            sum = sum + 1 ; i++ ; continue;
        }
        int peak = 1;
        while(i < arr.size() && arr[i] > arr[i - 1]){
            peak += 1; sum += peak ; i++ ;
        }
        int down = 1 ;
        while(i < arr.size() && arr[i] < arr[i - 1]){
            sum += down , i++ , down++ ;
        }

        if(down > peak){
            sum += down - peak ;
        }
    }
   return sum ;
}

int main(){

    vector<int> boys = {1, 0, 2};

    cout<<"Number of candy : "<< fun(boys);

    return 0 ;
}

