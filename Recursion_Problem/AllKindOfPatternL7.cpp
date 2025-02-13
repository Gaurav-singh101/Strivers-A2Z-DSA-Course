//  Sub - Sequence with sum k 

#include<bits/stdc++.h>
using namespace std ; 

void subSequence(int ind , int arr[] , vector<int> &ds , int sum , int n , int initial_sum){
    if(ind == n){
        if(initial_sum == sum){
            for(auto it : ds){
                cout<< it << " , ";
            }
            cout<<endl ;
        }
        return ;
    }

    ds.push_back(arr[ind]);
    initial_sum += arr[ind];
    subSequence(ind + 1 , arr , ds , sum , n , initial_sum);
    ds.pop_back();
    initial_sum -= arr[ind];
    subSequence(ind + 1 , arr , ds , sum , n , initial_sum);

}

int main(){

    int arr[] = {1 , 2 , 1};
    int n = 3 ; 

    int sum = 2 ; 
    vector<int> ds ;

    subSequence(0 , arr , ds , sum , n , 0);



    return 0 ;
}