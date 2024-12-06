//////////////////  better solution  //////////////////

#include<bits/stdc++.h>
using namespace std;


void setMatrix(vector<vector<int>> &m1) {
    int row[3] = {0};
    int col[3] = {0};

    for(int i = 0 ; i < 3; i++){
        for(int j = 0 ; j < 3 ; j++){
            if(m1[i][j] == 0){
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            if(row[i] || col[j] == 1){
                m1[i][j] = 0 ;
            }
        }
    }
}

int main() {

    cout << "!!!!!!!  Only enter binary matrix   !!!!!!!!!" << endl;

    vector<vector<int>> m1(3, vector<int>(3));

    cout << "Enter matrix: " << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> m1[i][j];
        }
    }

    setMatrix(m1);

    cout << "Resultant matrix:" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << m1[i][j] << "  ";
        }
        cout << endl;
    }

    return 0;
}


