//  Using Hshing - Better Approch 

#include<bits/stdc++.h>
using namespace std ; 

vector<int> Majority(vector<int>& arr){
    int n = arr.size() ; 
    vector<int> temp ;
    unordered_set<int> added ;

    for(int i = 0 ; i < n ; i++){
        if (added.count(arr[i])) continue;  
        int cnt = 0 ; 
        for(int j = 0 ; j < n ; j++){
            if(arr[j] == arr[i]){
                cnt++ ;
            }
            if(cnt > n / 3){
                temp.push_back(arr[i]);
                added.insert(arr[i]);
                break;
            }
        }

    }
    return temp ;
}

int main(){

    vector<int> arr = {2, 1, 5, 5, 5, 5, 6, 6, 6, 6, 6};

    vector<int> ans = Majority(arr);

    cout<<"Majority elements are : " ;
    for(int i = 0 ; i < ans.size() ; i++){
        cout<<ans[i]<<"  ";
    }


    return 0 ;
}