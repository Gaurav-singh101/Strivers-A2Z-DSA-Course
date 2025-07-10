#include<bits/stdc++.h>
using namespace std ;

vector<int> OneD(vector<vector<int>> arr , int n , int m){
    vector<int> ans(n*m);
    int ind = 0 ;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            ans[ind] = arr[i][j] ;
            ind++;
        }
    }
    return ans ;
}

int Bubblesort(vector<int> arr, int n) {
    for (int i = 0; i < n; i++) {
        int didSwap = 0;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j + 1], arr[j]);
                didSwap = 1;
            }
        }
        if (didSwap == 0) {
            break;
        }
    }
    int res = arr[n / 2];
    return res;
}


int Median(vector<vector<int>> arr){
    int n = arr.size();
    int m = arr[0].size();
    vector<int>ls = OneD(arr , n , m);

    int res = Bubblesort(ls , (n*m));

    return res ;
}

int main(){

    vector<vector<int>> Mat = {
        {1 , 5 , 7 , 9 , 11 },
        {2 , 3 , 4 , 5 , 10 },
        {9 , 10 , 12 , 14 , 16 }
    };

    cout<<"Median is  : "<<Median(Mat);


    return 0 ;
}