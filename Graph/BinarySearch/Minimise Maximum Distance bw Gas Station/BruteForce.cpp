#include<bits/stdc++.h>
using namespace std ;

long double miniMAXdis(vector<int> arr , int k){
    int n = arr.size();

    vector<int> howMany(n-1 , 0);
    for(int gasStation = 1 ; gasStation  <= k ; gasStation++){
        long double maxSection = -1;
        int maxInd = -1;
        for(int i = 0 ; i < n - 1 ; i++){
            long double diff = (arr[i + 1] - arr[i]);
            long double sectionLength = diff / (long double)(howMany[i] + 1);
            if(sectionLength > maxSection){
                maxSection = sectionLength;
                maxInd = i ;
            }
        }
        howMany[maxInd]++;
    }
    long double maxAns = -1;
    for(int i = 0 ; i < n - 1 ; i++){
        long double diff = (arr[i  + 1] - arr[i]);
        long double sectionLength = diff / (long double)(howMany[i] + 1);
        maxAns = max(maxAns , sectionLength);
    }
    return maxAns ;
}

int main(){

    vector<int> arr = {1 , 13 , 17 , 23};
    int k = 5 ;

    cout<<"Maximum  distance : "<<miniMAXdis(arr , k);

    return 0 ;
}