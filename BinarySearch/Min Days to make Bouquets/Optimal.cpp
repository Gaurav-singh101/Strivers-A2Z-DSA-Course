// Time complexity - O(N * log base 2 (max - min + 1)) 

#include<bits/stdc++.h>

using namespace std ; 

// m - m is number of bouquets 
// k - consecutive flower

int possible(vector<int> arr , int day , int m , int k){
    int count = 0 ; 
    int noOfBoque = 0 ; 
    int n = arr.size();

    if(m * k > n) return -1 ; // Exceed the number of bouquet

    for(int i = 0 ; i < n ; i++){
        if(arr[i] <= day){
            count++;
        }else{
            noOfBoque += (count / k);
            count = 0 ;
        }
    }

    noOfBoque += (count / k) ;

    if(noOfBoque >= m){
        return 1 ;
    }else{
        return 0 ;
    }

    return -1 ;
}

int minimum(vector<int> arr){
    int mini = INT_MAX;
    
    for(int i = 0 ; i < arr.size() ; i++){
        mini = min(arr[i] , mini);
    }

    return mini ;
}
int maximum(vector<int> arr){
    int maxi = INT_MIN;
    
    for(int i = 0 ; i < arr.size() ; i++){
        maxi = max(arr[i] , maxi);
    }

    return maxi ;
}


int  Bouquets(vector<int> BloomDay , int m , int k){
    int mini = minimum(BloomDay);
    int maxi = maximum(BloomDay);
    int low = mini , high = maxi ;

    while(low <= high){
        int mid = (low + high) / 2 ;

        if(possible(BloomDay , mid , m , k) == 1){ 
            high = mid - 1 ;
        }else{
            low = mid + 1 ;
        }
    }

    return low ;
}

int main(){

    vector<int> BloomDay = { 7 , 7 , 7 , 7 , 13 , 11 , 12 , 7 }; 
    int m = 2 ;  // No. of bouquet
    int k = 3 ;  // consecutive flower
    int x = Bouquets(BloomDay , m , k);

    if(x == -1){
        cout<<"Not possible";
    }else{
        cout<<"No.  of days : "<<x;
    }

    return 0 ;
}