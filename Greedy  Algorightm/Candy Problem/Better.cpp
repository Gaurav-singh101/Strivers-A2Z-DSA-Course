
#include<bits/stdc++.h>
using namespace std;

int fun(vector<int> &arr){
    int n = arr.size();
    vector<int> left(n);

    left[0] = 1;

    for(int i = 1; i < n; i++){
        if(arr[i] > arr[i - 1]){
            left[i] = left[i - 1] + 1;
        }else{
            left[i] = 1;
        }
    }

    int right = 1;
    int cur = 1;
    int sum = left[n - 1];

    for(int i = n - 2; i >= 0; i--){
        if(arr[i] > arr[i + 1]){
            cur = right + 1;
        }else{
            cur = 1;
        }
        right = cur;
        sum += max(left[i], cur);
    }

    return sum;
}

int main(){
    vector<int> boys = {1, 0, 2};
    cout << "Number of candy : " << fun(boys);
    return 0;
}
