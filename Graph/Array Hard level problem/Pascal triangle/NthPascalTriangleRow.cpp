/////////// Brute force solution /////////////


//  Given Row and column value tell me number at this place

// formula to find this is  (R-1)^C(C-1)  ===  (nCr)  factorial


// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std ;

// long long nCr(int N , int C){
//     int n = N - 1;
//     int r = C - 1;
//     long long result = 1 ; 
//     for(int i = 0 ; i  < r ; i++){
//         result = result * (n - i);
//         result = result / (i + 1);
//     }

//     return result ;
// }

// vector<long long> PascalRow(int r){

//     vector<long long> Result ;

//     for(int i = 1 ; i <= r ; i++){
//         Result.push_back(nCr(r , i));
//     }

//     return Result ;

// }

// int main(){

//     int row ;
//     cout<<"Enter the row value for Pascal triangle element"<<endl;
//     cin>>row;

//     vector<long long> Result = PascalRow(row);

//     for(int i = 0 ; i < row ; i++){
//         cout<<Result[i]<<" , ";
//     }

//     return 0 ;
// }




////////////////  Optimal Solution  ///////////////


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

int main(){

    int row ;
    cout<<"Enter the row value for Pascal triangle element"<<endl;
    cin>>row;

    vector<long long> Result = PascalRow(row);

    for(int i = 0 ; i < row ; i++){
        cout<<Result[i]<<" , ";
    }

    return 0 ;
}
