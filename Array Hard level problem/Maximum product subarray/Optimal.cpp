// Time complexity = O(N)
// Space complexity = O(1)


#include <bits/stdc++.h>
using namespace std;

int maxproduct(vector<int> &arr) {
    int result = INT_MIN;
    int n = arr.size();
    int pre = 1 , suff = 1 ;

    for(int i = 0 ; i < n ; i++){
        if(pre == 0) pre = 1 ;
        if(suff == 0) suff = 1 ;

        pre = pre * arr[i];
        suff = suff * arr[n-i-1];

        result = max(result , (pre , suff));
    }
    return result;
}

int main() {
    vector<int> arr = {2, 3, -2, 4};
    cout << "Maximum product is: " << maxproduct(arr);
    return 0;
}