#include<bits/stdc++.h>
using namespace std ;

vector<int> firstlast(vector<int> arr , int x){
    int n = arr.size();
    int first = -1 , last = -1 ;

    for(int i = 0 ; i < n ; i++){
        if(arr[i] == x){
            if(first == -1){
                first = last = i ;
            }
            else{
                last = i ;
            }
        }
    }
    return {first , last};
}

int main(){

    vector<int> arr = {2 , 4 , 6 , 8 , 8 , 8 , 11 , 13};
    int x = 8 ;
    vector<int> result = firstlast(arr , x);


    cout<<"first & last occurence is  : ";
    for(int x : result){
        cout<<x<<" , ";
    }

    return 0 ;
}