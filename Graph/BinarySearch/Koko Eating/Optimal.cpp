// Time complexity - O(n) * log base 2 (max of arr)

#include<bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <cmath> 
using namespace std;

int time(int arr[], int hourly, int n) {
    int totalTime = 0;

    for (int i = 0; i < n; i++) { 
        totalTime += ceil((double)arr[i] / hourly);
    }
    return totalTime;
}


int eating(int arr[], int max, int h, int n) {
    int low = 1 ;  int high = max; 
    int ans = INT_MAX ;

    while(low <= high){
        int mid = (low + high) / 2 ; 
        
        if(time(arr , mid , n) <= h){
            ans = mid ;
            high = mid - 1 ;
        }else{
            low = mid + 1 ;
        }
    }
    return ans ;
}

int main() {
    int piles[] = {3 , 6 , 7 , 11};
    int h = 8;
    int n = sizeof(piles) / sizeof(piles[0]);

    int max = *max_element(piles, piles + n);

    cout << "Number of bananas eating per hour: " << eating(piles, max, h, n) << endl;
    return 0;
}
