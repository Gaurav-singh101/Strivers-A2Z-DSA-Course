#include<bits/stdc++.h>
using namespace std ; 

void printSubSeq(int ind , int arr[] , vector<int> &ds , int n){
    if(ind >= n){
        for(auto it : ds){
            cout<< it << " , ";
        }

        if(ds.size() == 0){
            cout<<" {} ";
        }

        cout<<endl ; 
        return ;
    }


// Take or pick the particular index into the subsequence 
    ds.push_back(arr[ind]);
    printSubSeq(ind + 1 , arr , ds , n);
    ds.pop_back();

// not pick , or not take condition , this element is not added to your subsequence 
    printSubSeq(ind + 1 , arr , ds , n);

}

int main(){

    int arr[] = {3 , 1 , 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    vector<int> ds ;

    printSubSeq(0 , arr , ds , n);


    return 0 ;
}