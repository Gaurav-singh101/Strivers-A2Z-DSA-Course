#include<bits/stdc++.h>
using namespace std ; 

int main(){

    int n = 4 ; 

    for(int i = 1 ; i <= n ; i++){
        for(int j = n ; j > i ; j--){
            cout<<"   ";
        }
        for(int k = 0 ; k < i ; k++){
            cout<<" * ";
        }
        cout<<endl;
    }

    return 0 ; 
}