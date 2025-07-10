//  Monotonic Stack - Store element in stack in a specific order that is called monotonic stack (Increasing or Decreasing or Any order)

/////////////////  Brute Force Approch  ///////////

// #include<bits/stdc++.h>
// using namespace std ;

// class solution{
//     public:

//     vector<int> NextGreter(vector<int> arr){
//         int n = arr.size();
//         vector<int> NGE(n , -1);

//         for(int i = 0 ; i < n ; i++){
//             for(int j = i + 1 ; j < n ; j++){
//                 if(arr[j] > arr[i]){
//                     NGE[i] = arr[j];
//                     break;
//                 }
//             }
//         }
//         return NGE ;
//     }
// };

// int main(){

//     vector<int> arr = {6 , 0 , 8 , 1 , 3};

//     solution obj ;

//     vector<int> ans = obj.NextGreter(arr);

//     for(int i = 0 ; i < ans.size() ; i++){
//         cout<<ans[i]<<"  ";
//     }

//     return 0 ;
// }





/////////// Using Stack /////////////////////

#include <bits/stdc++.h>
using namespace std;

class solution{
public:

    vector<int> NextGreter(vector<int> arr){
        stack<int> st;
        vector<int> NGE(arr.size());

        for (int i = arr.size() - 1; i >= 0; i--){
            while (!st.empty() && st.top() <= arr[i]){
                st.pop();
            }
            if (st.empty()){
                NGE[i] = -1;
            }
            else{
                NGE[i] = st.top();
            }
            st.push(arr[i]);
        }
        return NGE;
    }
};

int main(){

    vector<int> arr = {6, 0, 8, 1, 3};

    solution obj;

    vector<int> ans = obj.NextGreter(arr);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << "  ";
    }

    return 0;
}