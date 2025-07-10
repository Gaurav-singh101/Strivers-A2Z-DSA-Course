// #include<bits/stdc++.h>
// using namespace std;

// vector<int> Intersection(vector<int> &a, int n, vector<int> &b, int m){

//     vector<int> ans;
//     vector<int> vis(m, 0); 

//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < m; j++){
//             if(a[i] == b[j] && vis[j] == 0){
//                 ans.push_back(a[i]);
//                 vis[j] = 1;  
//                 break;
//             }
//             if(b[j] > a[i]) break;
//         }
//     }
//     return ans;
// }

// int main(){
//     vector<int> a = {1, 2, 4, 5, 6};
//     vector<int> b = {2, 3, 5, 7};

//     vector<int> result = Intersection(a, a.size(), b, b.size());

//     cout << "Intersection of arrays: ";
//     for(int i = 0; i < result.size(); i++){
//         cout << result[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }






//////////////// Optimal Solution  ///////////////////


#include<bits/stdc++.h>
using namespace std;

vector<int> Intersection(vector<int> &a, int n, vector<int> &b, int m){

    vector<int> ans;
    int i = 0 ; 
    int j = 0 ; 
    while(i < n && j < m){
        if(a[i] < b[j]){
            i++;
        }else if(a[i] > b[j]){
            j++;
        }else{
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }

    return ans;
}

int main(){
    vector<int> a = {1, 2, 4, 5, 6};
    vector<int> b = {2, 3, 5, 7};

    vector<int> result = Intersection(a, a.size(), b, b.size());

    cout << "Intersection of arrays: ";
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}

