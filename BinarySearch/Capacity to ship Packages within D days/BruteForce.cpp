#include<bits/stdc++.h>
using namespace std ;

vector<int> maxSUM(vector<int> arr){
    int sum  = 0 ;
    int maxi = INT_MIN;

    for(int i = 0 ; i < arr.size() ; i++){
        sum += arr[i];
        maxi = max(maxi , arr[i]);
    }
    return {maxi, sum} ;
}

int fun(vector<int> wt , int shipcap){
    int days = 1 ; int load = 0 ;
    for(int i = 0 ; i < wt.size() ; i++){
        if(load + wt[i] > shipcap){
            days = days + 1 ;
            load = wt[i];
        }else{
            load += wt[i];
        }
    }
    return days ;
}

int capacity(vector<int> wt , int days){

    vector<int> result = maxSUM(wt);
    int maxi = result[0];
    int sum = result[1];

    for(int i = maxi ; i < sum ;  i++){
        int leastCAP = fun(wt , i) ; 

        if(leastCAP <= days){
            return i;
        }
    }

    return -1;
}

int main(){

    vector<int> wt = {1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10};
    int days = 5 ;


    cout<<"Least capacity to ship packages : "<<capacity(wt , days);

    return 0 ; 

}