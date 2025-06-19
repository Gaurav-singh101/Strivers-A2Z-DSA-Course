// Next Greter Element in the circular array 

#include <bits/stdc++.h>
using namespace std;

class solution{
public:

    vector<int> NextGreter(vector<int> arr){
        stack<int> st;
        vector<int> NGE(arr.size());
        int n = arr.size();
        for (int index = 2 * arr.size() - 1; index >= 0; index--){
            int i = index % n ;
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