// TC  = O(N**2)
// SC = O(1)


#include<iostream>
#include<bits/stdc++.h>
using namespace std ;

list<int> Majority(int arr[] , int n){
    list <int> ls;
    for(int i = 0 ; i < n ; i++){
        if(ls.size() == 0 || ls.back() != arr[i]){
            int count = 0 ;
            for(int j = 0 ; j < n ; j++){
                if(arr[i] == arr[j]){
                    count++;
                if(count > n / 3){
                    ls.push_back(arr[i]);
                }
                }
            }
        }
        if(ls.size() == 2){
            break ;
        }
    }
    return ls ;
}

int main(){

    int n ;
    cout<<"Enter the array size : ";
    cin >> n;
    int arr[n] ;
    cout<<"Enter array element : ";
    for(int i = 0 ; i < n ; i ++){
        cin>>arr[i];
    }

    list<int> Result = Majority(arr , n);

    for(auto it : Result){
        cout<<it<<" , ";
    }
    return 0 ;
}