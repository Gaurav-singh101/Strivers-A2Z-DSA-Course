#include<bits/stdc++.h>
using namespace std ;

vector<int> max_SUM(vector<int> arr){
    int sum  = 0 ;
    int maxi = INT_MIN;

    for(int i = 0 ; i < arr.size() ; i++){
        sum += arr[i];
        maxi = max(maxi , arr[i]);
    }
    return {maxi, sum} ;
}

int fun(vector<int> wt , int shipcap ){
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

    vector<int> result = max_SUM(wt);
    int low = result[0];
    int high = result[1];

    int ans = -1;

    while(low <= high){
        int mid = (low + high) / 2 ;
        int NoOfDays = fun(wt , mid) ;  

        if(NoOfDays <= days){
            ans = mid ; 
            high = mid - 1 ;
        }else{ 
            low = mid + 1 ; 
        }
    }

    return ans;
}

int main(){

    vector<int> wt = {1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10};
    int days = 5 ;

    cout<<"Least capacity to ship packages : "<<capacity(wt , days);

    return 0 ;

}