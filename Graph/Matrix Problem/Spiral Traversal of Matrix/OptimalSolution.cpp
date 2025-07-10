#include<bits/stdc++.h>
#include<vector>
using namespace std ;

vector <int> spiralMatrix(vector<vector<int>> &mat){
    int n = mat.size();
    int m = mat[0].size();
    int left = 0 , right = m - 1;
    int top = 0 , bottom = n - 1;
    vector<int> ans ;

    while(left <= right && top <= bottom){

        // Traverse from left to right
        for(int i  = left ; i <= right ; i++){
            ans.push_back(mat[top][i]);
        }
        top++;

        // Traverse downwards
        for(int i = top ; i <= bottom ; i++){
            ans.push_back(mat[i][right]);
        }
        right--;

        // Traverse from right to left
        if(top <= bottom){
            for(int i = right ; i >= left ; i--){
                ans.push_back(mat[bottom][i]);
            }
            bottom--;
        }

        // Traverse upwards
        if(left <= right){
            for(int i = bottom ; i >= top ; i--){  // Corrected condition
                ans.push_back(mat[i][left]);
            }
            left++;
        }

    }
    return ans;
}

int main(){
    int r;
    cout << "Enter row value: ";
    cin >> r;
    int c;
    cout << "Enter column value: ";
    cin >> c;

    vector<vector<int>> mat(r, vector<int>(c));
    cout << "Enter matrix elements: " << endl;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> mat[i][j];
        }
    }

    vector<int> result = spiralMatrix(mat);

    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " , ";
    }

    return 0;
}
