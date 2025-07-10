// #include<bits/stdc++.h>
// #include<iostream>
// #include<set>
// using namespace std; 


// void Union(int arr1[], int n, int arr2[], int m) {
//     set<int> R;  

//     for(int i = 0 ; i < n ; i++){
//         R.insert (arr1[i]);
//     }

//     for(int i = 0 ; i < m ; i++){
//         R.insert (arr2[i]);
//     }

//     int Result[R.size()];
//     int i = 0 ;
//     for(auto it : R){
//         Result[i++] = it;
//     }

//     for(int i = 0 ; i < R.size() ; i++){
//         cout<<Result[i]<<" , ";
//     }
// }

// int main(){

//     int arr1[7] = {1,1,2,4,8,10,44};
//     int arr2[5] = {1,14,8,10,7};

//     Union(arr1 , 7 , arr2 , 5);

//     return 0 ;
// }



////////////////////  Optimal Solution  ////////////////////


#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std; 


vector <int> Union( vector <int> a , vector <int> b) {

    int n1 = a.size();
    int n2 = b.size();
    int i = 0 ; 
    int j = 0 ;
    vector<int> unionArr;
    while(i < n1 && j < n2){
        if(a[i] <= b[j]){
            if(unionArr.size() == 0 || unionArr.back() != a[i]){
                unionArr.push_back(a[i]);
            }
            i++;
        }else{
            if(unionArr.size() == 0 || unionArr.back() != b[j]){
                unionArr.push_back(b[j]);
            }
            j++;
        }
    }

    while(j < n2){
        if(unionArr.size() == 0 || unionArr.back() != b[j]){
                unionArr.push_back(b[j]);
            }
            j++;
    }

    while(i < n1){
        if(unionArr.size() == 0 || unionArr.back() != a[i]){
                unionArr.push_back(a[i]);
            }
            i++;
    }
   return unionArr ;
}

int main(){
    vector<int> a = {1, 2, 4, 5, 6};
    vector<int> b = {2, 3, 5, 7};


    vector<int> result = Union(a, b);

    cout << "Union of arrays: ";
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
