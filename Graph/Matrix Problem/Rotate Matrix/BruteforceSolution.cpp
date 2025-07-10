#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> setMatrix(vector<vector<int>> &m1) {
    int r = m1.size();            
    int c = m1[0].size();         

    vector<vector<int>> n1(r, vector<int>(c));
    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; j < c ; j++){
            n1[j][r - 1 - i] = m1[i][j];
        }
    }

    return n1 ;
}

int main() {

    cout << "!!!!!!!  Only enter binary matrix   !!!!!!!!!" << endl;

    int row;
    cout << "Enter row number of matrix: ";
    cin >> row;
    int col;
    cout << "Enter column number of matrix: ";
    cin >> col;

    vector<vector<int>> m1(row, vector<int>(col));

    cout << "Enter matrix: " << endl;
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cin >> m1[i][j];
        }
    }


    vector<vector<int>> result = setMatrix(m1);

    cout << "Resultant matrix:" << endl;
    for(int i = 0; i < result.size(); i++) {
        for(int j = 0; j < result[0].size(); j++) {
            cout << result[i][j] << "  ";
        }
        cout << endl;
    }

    return 0;
}
