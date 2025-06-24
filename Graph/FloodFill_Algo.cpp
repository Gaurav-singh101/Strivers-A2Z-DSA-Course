// 733. Flood Fill
// You are given an image represented by an m x n grid of integers image, where image[i][j] represents the pixel value of the image. You are also given three integers sr, sc, and color. Your task is to perform a flood fill on the image starting from the pixel image[sr][sc].

// To perform a flood fill:

// Begin with the starting pixel and change its color to color.
// Perform the same process for each pixel that is directly adjacent (pixels that share a side with the original pixel, either horizontally or vertically) and shares the same color as the starting pixel.
// Keep repeating this process by checking neighboring pixels of the updated pixels and modifying their color if it matches the original color of the starting pixel.
// The process stops when there are no more adjacent pixels of the original color to update.
// Return the modified image after performing the flood fill.

 

// Example 1:

// Input: image = [[1,1,1],[1,1,0],[1,0,1]], sr = 1, sc = 1, color = 2

// Output: [[2,2,2],[2,2,0],[2,0,1]]

// Explanation:

// From the center of the image with position (sr, sc) = (1, 1) (i.e., the red pixel), all pixels connected by a path of the same color as the starting pixel (i.e., the blue pixels) are colored with the new color.

// Note the bottom corner is not colored 2, because it is not horizontally or vertically connected to the starting pixel.



#include<bits/stdc++.h>
using namespace std ; 

class solution{
    public : 

    void dfs(int sr , int sc , vector<vector<int>>& ans , vector<vector<int>>& img , int iniColor , int NewColor , vector<int>& delRow , vector<int>& delCol){
        ans[sr][sc] = NewColor ;
        int n = img.size();
        int m = img[0].size();

        for(int i = 0 ; i < 4 ; i++){
            int Nrow = sr + delRow[i];
            int Ncol = sc + delCol[i];
            if(Nrow >= 0 && Nrow < n && Ncol >= 0 && Ncol < m && img[Nrow][Ncol] == iniColor && ans[Nrow][Ncol] != NewColor){
                dfs(Nrow , Ncol , ans , img , iniColor , NewColor , delRow , delCol);
            }
        }
    }

    vector<vector<int>>floodFill(vector<vector<int>>& img , int sr , int sc , int Newcolor){
        int iniColor = img[sr][sc];
        vector<vector<int>> ans = img ;

        vector<int> delRow = {-1 , 0 , +1 , 0};
        vector<int> delCol = {0 , +1 , 0 , -1};
        dfs(sr , sc , ans , img , iniColor , Newcolor , delRow , delCol);
        return ans ;
    }

};

int main(){

    vector<vector<int>> img = {{1,1,1},{1,1,0},{1,0,1}};
    int sr = 1, sc = 1, color = 2 ;
    
    solution obj ;
    vector<vector<int>> Result = obj.floodFill(img , sr , sc , color);

    for(auto it : Result){
        for(auto i : it){
            cout<<i<<" ";
        }
        cout<<endl ;
    }

    return 0 ;
}