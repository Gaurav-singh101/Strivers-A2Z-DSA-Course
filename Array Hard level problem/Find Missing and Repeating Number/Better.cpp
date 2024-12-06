#include<bits/stdc++.h>
using namespace std ;

void findMR(int arr[] , int n){

    int hashing[n + 1] = {0};

    for(int i = 0 ; i < n ; i++){
        hashing[arr[i]]++;
    }
 
    int missing = -1 ;
    int reapeting = -1 ;
    for(int i = 1 ; i <= n ; i++){
        if(hashing[i] == 0){
            missing = i ;
        }else if(hashing[i] == 2){
            reapeting = i ;
        }
    }

cout << "Missing number is : "<<missing<<endl;
cout << "Repeating number is : "<<reapeting<<endl;

}

int main(){

    int arr[] = {4 , 3 , 6 , 2 , 1 , 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    findMR(arr , n);

    return 0 ;
}