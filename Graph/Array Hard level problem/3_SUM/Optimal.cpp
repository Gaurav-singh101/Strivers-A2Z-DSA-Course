#include<iostream>
#include<bits/stdc++.h>
using namespace std; 

vector<vector<int>> triplet(vector<int> arr, int n) {
    vector<vector<int>> ans; 
    sort(arr.begin(), arr.end()); 
    
    for (int i = 0; i < n - 2; i++) {
 
        if (i > 0 && arr[i] == arr[i - 1]) continue;
        
        int j = i + 1;  
        int k = n - 1;  
        
        while (j < k) {
            int sum = arr[i] + arr[j] + arr[k];
            if (sum < 0) {
                j++;  
            } else if (sum > 0) {
                k--;  
            } else {
                
                ans.push_back({arr[i], arr[j], arr[k]});
                
                j++;
                k--;
                
                while (j < k && arr[j] == arr[j - 1]) j++;

                while (j < k && arr[k] == arr[k + 1]) k--;
            }
        }
    }

    return ans;
}

int main() {
    vector<int> arr = {-1, 1, -1, 2, 0, 0, 0, 2, 2, -1};
    int n = arr.size();

    vector<vector<int>> Result = triplet(arr, n);

    for (auto& triplet : Result) {
        for (int num : triplet) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
