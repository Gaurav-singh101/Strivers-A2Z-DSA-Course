#include<bits/stdc++.h>
using namespace std;   

bool jumpgame(vector<int>& nums) {
    int n = nums.size();
    int maxReach = 0 ; 

    for(int i = 0 ; i < nums.size() ; i++){
        if(i > maxReach){
            return false ;
        }
        maxReach = max(maxReach , nums[i] + i);
    }
    return true ;
}

int main(){

    vector<int> nums = {2,0,1,0,4}; 

    int ans = jumpgame(nums);

    if(ans == 1){
        cout << "You can reach the last index" << endl;
    }else{
        cout << "You cannot reach the last index" << endl;
    }

    return 0 ;
}