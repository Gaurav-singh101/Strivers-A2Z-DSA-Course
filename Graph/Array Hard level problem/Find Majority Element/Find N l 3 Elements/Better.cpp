//  Using Hshing - Better Approch 

#include<bits/stdc++.h>
using namespace std ; 

vector<int> Majority(vector<int>& arr){
    int n = arr.size() ; 

    map<int , int> mapp ; 

    for(int i= 0 ; i < n ; i++){
        mapp[arr[i]]++;
    }

    vector<int> temp ;
    for(auto it : mapp){
        if(it.second > n / 3){
            temp.push_back(it.first);
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