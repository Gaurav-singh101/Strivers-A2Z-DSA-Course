#include<bits/stdc++.h>
using namespace std;

void setMatrix(vector<vector<int>> &m1) {
    int r = m1.size();            
    int c = m1[0].size();         

    for(int i = 0 ; i < r-1 ; i++){
        for(int j = i + 1 ; j < c ; j++){
            swap(m1[i][j] , m1[j][i]);
        }
    }

    for(int i = 0 ; i < r ; i++){
        reverse(m1[i].begin() , m1[i].end());
    }
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


    setMatrix(m1);

    cout << "Resultant matrix:" << endl;

    for(int i = 0; i < m1.size(); i++) {
        for(int j = 0; j < m1[0].size(); j++) {
            cout << m1[i][j] << "  ";
        }
        cout << endl;
    }

    return 0;
}
