#include<bits/stdc++.h>
using namespace std ; 

bool canWEplace(vector<int> arr , int dist , int cow){

    int countCows = 1 , last = arr[0];

    for(int i = 1 ; i < arr.size(); i++){
        if(arr[i] - last >= dist){
            countCows++ ;
            last = arr[i];
        }
    } 
    if(countCows >= cow)return true ;
    else{
        return false ;
    }

}

int distance(vector<int> arr , int cow){
    sort(arr.begin() , arr.end());
    int n = arr.size();
    int min = arr[0];
    int max = arr[n - 1];

    for(int i = 0 ; i < (max - min) ; i++){
        if(canWEplace(arr , i , cow) == true){
            continue;
        }else{
            return (i - 1);
        }
    }
    return -1 ;
}

int main(){

    vector<int> arr = {0 , 3 , 4 , 7 , 9 , 10};
    int cow = 4 ;

    cout<<"Minimum distance between cows : "<<distance(arr , cow);


    return 0 ;
}