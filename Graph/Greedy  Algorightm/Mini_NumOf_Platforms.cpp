// #include<bits/stdc++.h>
// using namespace std ;

// int Platforms(vector<int> &AT , vector<int> &DT){               // Calculating overlaping timing of trains 
//     int maxcount = 0 ;

//     for(int i = 0 ;  i < AT.size() ; i++){
//         int cnt = 1 ; 
//         for(int j = 0 ; j < AT.size() ; j++){
//             if(i == j) continue;                              // Skip comparing the same train
//             if(AT[j] <= DT[i] && DT[j] >= AT[i]){
//                 cnt++ ;
//             }
//         }
//         maxcount = max(maxcount , cnt);
//     }
//     return maxcount ;
// }

// int main(){

//     vector<int> AT = {900, 940, 950, 1100, 1500, 1800};
//     vector<int> DT = {910, 1200, 1120, 1130, 1900, 2000};

//     int no_of_platform = Platforms(AT , DT);

//     cout<<"Total number of platforms required : "<<no_of_platform ;

//     return 0 ;
// }




///////////////////////////////////////////////////////////




#include<bits/stdc++.h>
using namespace std ;

int Platforms(vector<int> &AT , vector<int> &DT){ 
    sort(AT.begin(), AT.end());
    sort(DT.begin(), DT.end());

    int i = 0 , j = 0 , cnt = 0 , maxcount = INT_MIN ;

    while(i < AT.size()){
        if(AT[i] < DT[j]){
            cnt++ ; 
            i++ ;
            maxcount = max(maxcount , cnt);
        }else if(AT[i] > DT[j]){
            cnt-- ;
            j++ ;
        }
    }
    return maxcount ;
}

int main(){

    vector<int> AT = {900, 940, 950, 1100, 1500, 1800};
    vector<int> DT = {910, 1200, 1120, 1130, 1900, 2000};

    int no_of_platform = Platforms(AT , DT);

    cout<<"Total number of platforms required : "<<no_of_platform ;

    return 0 ;
}
