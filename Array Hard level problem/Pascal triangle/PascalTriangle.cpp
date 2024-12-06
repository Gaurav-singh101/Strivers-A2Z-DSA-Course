/////////////  Brute force solution ///////////


// #include<iostream>
// #include<list>
// using namespace std ;


// long long nCr(int N , int C) {
//     int n = N - 1;
//     int r = C - 1;
//     long long result = 1; 
//     for(int i = 0; i < r; i++) {
//         result = result * (n - i);
//         result = result / (i + 1);
//     }
//     return result;
// }


// list<list<long long>> PascalTri(int n) {
//     list<list<long long>> Result;  
//     for(int row = 1; row <= n; row++) { 
//         list<long long> temp;
//         for(int col = 1; col <= row; col++) { 
//             temp.push_back(nCr(row, col));
//         }
//         Result.push_back(temp);
//     }
//     return Result;
// }


// void printPascal(list<list<long long>> triangle) {
//     for(auto row : triangle) {
//         for(auto element : row) {
//             cout << element << " ";
//         }
//         cout << endl;
//     }
// }

// int main() {
//     int row;
//     cout << "Enter the number of rows for Pascal's triangle: " << endl;
//     cin >> row;

//     list<list<long long>> result = PascalTri(row); 

//     printPascal(result); 

//     return 0;
// }






/////////////  Optimal Solution  //////////////////





#include<iostream>
#include<bits/stdc++.h>
using namespace std ;


vector<long long> PascalRow(int r){
    vector<long long> Result ;
int ans = 1 ;
Result.push_back(ans);
    for(int i = 1 ; i < r ; i++){
        ans = ans * (r - i);
        ans = ans / (i);
        Result.push_back(ans);
    }
    return Result ;
}

vector<vector<long long>> PascalTri(int r){

    vector<vector<long long>> Result ;

    for(int i = 1 ; i <= r ; i++){
        Result.push_back(PascalRow(i));
    }
    return Result ;
}


int main(){

    int row ;
    cout<<"Enter the row value for Pascal triangle element"<<endl;
    cin>>row;

    vector<vector<long long>> Result = PascalTri(row);


    for(auto row : Result) {
        for(auto element : row) {
            cout << element << " ";
        }
        cout << endl;
    }

    return 0 ;
}
