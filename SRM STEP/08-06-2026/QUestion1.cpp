#include<bits/stdc++.h>
using namespace std ; 

int help(int ind , vector<int>& readings , int threshold){
    if(ind == readings.size() - 1)return 0 ;

    return readings[ind] > threshold ? 1 +  help(ind + 1 , readings , threshold) : 0 + help(ind + 1 , readings , threshold);
}

int countCritical(vector<int>& readings, int threshold){
    return help(0 , readings , threshold);
}

int main(){

    vector<int>reading = {80 , 130 , 95 , 122 , 60};
    int threshold = 120 ; 

    cout<<"Number of patient critical : "<<countCritical(reading , threshold);

    return 0 ; 
}