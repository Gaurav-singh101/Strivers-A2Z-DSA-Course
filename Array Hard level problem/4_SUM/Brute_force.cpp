#include<bits/stdc++.h>
using namespace std ;

vector<vector<int>> foursum(vector<int> arr , int target){

    int n = arr.size();
    set<vector<int>> st ;
    for(int i = 0 ; i < n ; i++){
        for(int j = i + 1 ; j < n ; j++){
            for(int k = j + 1 ; k < n ; k++){
                for(int l = k + 1 ; l < n ; l++){
                    long long sum = arr[i] + arr[j] + arr[k] + arr[l] ;
                    if(sum == target){
                        vector<int> temp = {arr[i] , arr[j] , arr[k] , arr[l]};
                        sort(temp.begin() , temp.end());
                        st.insert(temp);
                    }
                }
            }
        }
    }   

    vector<vector<int>> ans(st.begin() , st.end());
    return ans ;

}



int main(){

    vector<int> arr = {1 , -2 , -1 , 0 , 2 , 1 , 0 , -1};
    int target = 0 ;
    vector<vector<int>> result = foursum(arr , target);

    for(auto it : result){
        cout<<"[";
        for(int i = 0 ; i < it.size() ; i++){
            cout<<it[i]<<" , ";
        }
        cout<<"]"<<endl;
    }


    return 0 ;
}