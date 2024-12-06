#include<bits/stdc++.h>
using namespace std ;

void findMR(int arr[] , int n){
    
    int missing = -1 ;
    int Repeating = -1  ;

    for(int i = 0 ; i < n ; i++){
        int count = 0 ;
        for(int j = 0 ; j < n ; j++){
            if(i == arr[j]){
                count++;
            }
        }
        if(count == 2) {
            Repeating = i ;
        }else if(count == 0){
            missing = i ;
        }
    }
cout << "Missing number is : "<<missing<<endl;
cout << "Repeating number is : "<<Repeating<<endl;

}

int main(){

    int arr[] = {4 , 3 , 6 , 2 , 1 , 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    findMR(arr , n);

    return 0 ;
}