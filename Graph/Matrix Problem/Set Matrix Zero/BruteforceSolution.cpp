//////////////  Brute force solution  ////////////////////

#include<bits/stdc++.h>
using namespace std;


void markRow(int i, vector<vector<int>> &m1) {
    for(int j = 0; j < 3; j++) {
        if(m1[i][j] != 0) {
            m1[i][j] = -1;
        }
    }
}


void markCol(int j, vector<vector<int>> &m1) {
    for(int i = 0; i < 3; i++) {
        if(m1[i][j] != 0) {
            m1[i][j] = -1;
        }
    }
}


void setMatrix(vector<vector<int>> &m1) {

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(m1[i][j] == 0) {
                markRow(i, m1);
                markCol(j, m1);
            }
        }
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(m1[i][j] == -1) {
                m1[i][j] = 0;
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



