#include<bits/stdc++.h>
using namespace std ; 

int main(){

    vector<int> pathCost = {50, 60 , 10 , 30 , 20};

    int n = pathCost.size();

    int prev = 0 ; 
    int Sprev = 0 ; 

    for(int i = 1 ; i < n ; i++){
        int fs = prev + abs(pathCost[i] - pathCost[i - 1]);
        int ss = INT_MAX ;
        if(n > 1){
            ss = Sprev + abs(pathCost[i] - pathCost[i - 2]);
        }
        Sprev = prev ;
        prev = min(fs , ss);
    }

    cout<<"Path Cost : "<<prev;

    return 0 ;
}