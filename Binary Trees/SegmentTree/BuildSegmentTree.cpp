#include<bits/stdc++.h>
using namespace std ;

class segmentTree{
    public :
    
    void magic(int ind , int l , int r , vector<int>&nums , vector<int>& SegT){
        if(l == r){
            SegT[ind] = nums[r];
            return ;
        }
        
        int mid = (l + r) / 2 ;
        
        magic(2 * ind + 1 , l , mid , nums , SegT);
        magic(2 * ind + 2 , mid + 1 , r , nums , SegT);
        SegT[ind] = SegT[2 * ind + 1] + SegT[2 * ind + 2];
    }
    
    
    
    vector<int>ST(vector<int>& nums){
        int n = nums.size();
        vector<int>SegT(2 * n , 0);
        magic(0 , 0 , n - 1 , nums , SegT);
            
        return SegT ; 
    }
};

int main(){
    
    vector<int>nums = { 3, 1 , 2 , 7 };
    
    segmentTree  T; 
    vector<int> ans = T.ST(nums);
    
    int n = ans.size();
    
    for(int i = 0 ; i < n ; i++){
        cout<<ans[i]<<" , ";
    }
    
    return 0;
}
