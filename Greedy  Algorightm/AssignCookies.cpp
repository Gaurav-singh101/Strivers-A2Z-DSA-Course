#include<bits/stdc++.h>
using namespace std ; 

int AssignCokkies(vector<int>& greed , vector<int>& cookies){
    sort(greed.begin() , greed.end());
    sort(cookies.begin() , cookies.end());

    int n = greed.size() ; 
    int m = cookies.size() ;
    int i = 0 , j = 0 , count = 0 ;

    while(i < n && j < m){
        if(cookies[j] >= greed[i]){
            count++ ; 
            i++ ;
        }
        j++ ;
    }

    return count ;
}

int main(){

    vector<int> greed = {1 , 5 , 3 , 3 , 4};
    vector<int> cookies = {4 , 2 , 1 , 2 , 1 , 3};

    cout<<AssignCokkies(greed , cookies);

    return 0 ;
}