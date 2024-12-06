#include<bits/stdc++.h>
using namespace std ;

vector<int> findMR(vector<int> arr){
    int n = arr.size();

    long long SN = ((n * (n + 1)) / 2);          // Sum of n natural number
    long long S2N = (n * (n + 1) * (2*n +1) / 6); // sum of square of n natural number 
    long long sn = 0 ; 
    long long s2n = 0;

    for(int i = 0 ; i < n ; i++){
        sn += arr[i];
        s2n += (long long)arr[i] * (long long)arr[i];
    }

    long long val1 = (sn - SN) ;
    long long val2 = (s2n - S2N) ;
    val2 = val2 / val1 ; 
    long long x = (val1 + val2) / 2 ;
    long long y = x - val1 ;
    return {(int)x , (int)y};


}

int main(){

    vector<int> arr = {4 , 3 , 6 , 2 , 1 , 1};


    vector<int> result = findMR(arr);

    cout<<"Missing : "<<result[1]<<endl ;
    cout<<"Repeating : "<<result[0]<<endl ;



    return 0 ;
}