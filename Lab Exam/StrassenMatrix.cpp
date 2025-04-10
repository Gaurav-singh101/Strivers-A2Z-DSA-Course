#include<bits/stdc++.h>
using namespace std ;

vector<vector<int>> Multi(vector<vector<int>>& M1 , vector<vector<int>>& M2){

    int m1 = (M1[0][0] + M1[1][1]) * (M2[0][0] + M2[1][1]);
    int m2 = (M1[1][0] + M1[1][1]) * M2[0][0] ; 
    int m3 = M1[0][0] * (M2[0][1] - M2[1][1]) ;
    int m4 = M1[1][1] * (M2[1][0] - M2[0][0]) ;
    int m5 = (M1[0][1] + M1[0][0]) * M2[1][1] ; 
    int m6 = (M1[1][0] - M1[0][0]) * (M2[0][0] + M2[0][1]);
    int m7 = (M1[0][1] - M1[1][1]) * (M2[1][0] + M2[1][1]);

    int c1 = (m1 + m4) - (m5 + m7);
    int c2 = m3 + m5 ;
    int c3 = m2 + m4 ;
    int c4 = (m1 + m3) + (m6 - m2);

    vector<vector<int>> c(2, vector<int>(2));

    c[0][0] = c1 ; 
    c[0][1] = c2 ; 
    c[1][0] = c3 ; 
    c[1][1] = c4 ;

    return c ;

}

int main(){

    vector<vector<int>> Mat1(2, vector<int>(2));
    vector<vector<int>> Mat2(2, vector<int>(2));
    

    cout<<"Input First Matrix : "<<endl;

    for(int i = 0 ; i < 2 ; i++){
        for(int j = 0 ; j < 2 ; j++){
            cin>>Mat1[i][j];
        }
        cout<<endl ;
    }

    cout<<endl;

    cout<<"Input Second Matrix : "<<endl ;
    for(int i = 0 ; i < 2 ; i++){
        for(int j = 0 ; j < 2 ; j++){
            cin>>Mat2[i][j];
        }
        cout<<endl ;
    }

    vector<vector<int>> Result = Multi(Mat1 , Mat2);

    cout<<"After Multiplication : "<<endl;
    for(int i = 0 ; i < 2 ; i++){
        for(int j = 0 ; j < 2 ; j++){
            cout<<Result[i][j]<<" ";
        }
        cout<<endl ;
    }


    return 0 ;
}