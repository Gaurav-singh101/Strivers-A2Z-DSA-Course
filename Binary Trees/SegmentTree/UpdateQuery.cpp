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
    
    void update(int ind , int val , int idx , int l , int r , vector<int>&nums , vector<int>& SegT){
        if(l == r){
            SegT[idx] = val ;
            nums[ind] = val ;
            return ; 
        }
        
        int mid = (l + r) / 2 ;
        
        if(ind <= mid){
            update(ind , val , (2 * idx + 1) , l , mid , nums , SegT);
        }else{
            update(ind , val , (2 * idx + 2) , mid + 1 , r , nums , SegT);
        }
        
        SegT[idx] = SegT[idx * 2 + 1] + SegT[idx * 2 + 2];
    }
        
    void UpdateSegmentTree(int idx , int val , vector<int>&nums , vector<int>& SegT){
        int n = nums.size();
        update(idx , val , 0 , 0 , n - 1 , nums , SegT);
    }
};

int main(){
    
    vector<int>nums = { 3, 1 , 2 , 7 };
    
    cout<<endl<<"nums - ";
    
    for(int i = 0 ; i < nums.size() ; i++){
        cout<<nums[i]<<" , ";
    }
    
    segmentTree  T; 
    vector<int> ans = T.ST(nums);
    
    int n = ans.size();
    
    cout<<endl<<"Segment Tree - ";
    
    for(int i = 0 ; i < n ; i++){
        cout<<ans[i]<<" , ";
    }
    
    
    T.UpdateSegmentTree(1 , 2 , nums , ans);
    
    cout<<endl<<"After Updation nums - ";
    
    for(int i = 0 ; i < nums.size() ; i++){
        cout<<nums[i]<<" , ";
    }
    
    cout<<endl<<"After Update segmentTree - ";
    
    for(int i = 0 ; i < n ; i++){
        cout<<ans[i]<<" , ";
    }
    
    return 0;
}
