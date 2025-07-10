#include<iostream>
#include<bits/stdc++.h>
using namespace std ; 

vector<vector<int>> triplet(int arr[] , int n){

    set<vector<int>> st;
    for(int i = 0 ; i < n ; i ++){
        for(int j = i + 1 ; j < n ; j++){
            for(int k = j + 1 ; k < n ; k++){
                if(arr[i] + arr[j] + arr[k] == 0){
                    vector<int> temp = {arr[i] , arr[j] , arr[k]};
                    sort(temp.begin() , temp.end());
                    st.insert(temp);
                }
            }
        }
    }
    vector<vector<int>> ans(st.begin() , st.end());
    return ans;
}

int main(){

    int n ; 
    cout<<"Enter the array size : ";
    cin>>n;
    int arr[n];
    cout<<"\nEnter the array element : ";
for(int i = 0 ; i < n ; i ++){
    cin>>arr[i];
}

    vector<vector<int>> Result = triplet(arr , n);

    for (auto triplet : Result) {
        for (int num : triplet) {
            cout << num << " ";
        }
        cout << endl;
    }


    return 0;
}