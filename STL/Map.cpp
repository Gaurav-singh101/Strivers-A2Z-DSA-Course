// Map stored unique key in sorted ordered 

#include<bits/stdc++.h>

using namespace std ; 

void ExMap(){

    map<int , int> ma ;

    map<int , pair<int , int>> ma1;

    map<pair<int , int>, int> ma2 ; 

    ma[1] = 2;
    ma.insert({3 ,4});  
    ma.emplace(2 , 6);

    ma1.insert({1 , { 3 , 4}});

    // for(auto it : ma){
    //     cout << it.first << " " << it.second << endl ;
    // }


    // cout << ma[1] << endl ;
    // cout << ma[5] <<endl ;

    auto it = ma.find(3);
    cout << it -> second <<endl ;


    // erase , swap , size , empty  are same as above 



}

int main (){

    ExMap();



    return 0 ;
}

