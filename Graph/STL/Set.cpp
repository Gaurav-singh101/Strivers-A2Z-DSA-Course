// sorted and unique

#include <iostream>
#include <set>

using namespace std;

void ExSet() {
    set<int> st;

    // st.insert(1);  // (1)
    // st.insert(6);  // (1, 6)
    // st.insert(8);  // (1, 6, 8)
    // st.insert(0);  // (0, 1, 6, 8)
    // st.insert(6);  // (0, 1, 6, 8)
    // st.insert(8);  // (0, 1, 6, 8)

    // auto it = st.find(6);    
    //     cout << *it << endl;

    // auto it = st.find(9);    // if the value is not there then it return the iteretor of next place 
    // cout << *it << endl;


    // // Iterate over the set and print all elements
    // for (auto it = st.begin(); it != st.end(); ++it) {
    //     cout << *it << " ";  // Output: 0 1 6 8
    // }
    // cout << endl;

    // // While loop to print and remove elements from the set
    // while (!st.empty()) {
    //     auto it = st.begin();
    //     cout << *it << " ";  // Print the first element
    //     st.erase(it);  // Remove the first element
    // }
    // cout << endl;



    ////////////////////////////////////////////////


    st.insert(1);  // (1)
    st.insert(6);  // (1, 6)
    st.insert(8);  // (1, 6, 8)
    st.insert(0);  // (0, 1, 6, 8)
    st.insert(6);  // (0, 1, 6, 8)
    st.insert(8);  // (0, 1, 6, 8)
    st.erase(6);

//////////////////////////////////

    // int cnt = st.count(1);

    // auto it = st.find(8);
    // st.erase(it) ;

//////////////////////////////////

auto it1 = st.find(1);
auto it2 = st.find(8);
st.erase(it1 , it2);

auto it = st.lower_bound(2);

auto it = st.upper_bound(5);




}


int main() {
    ExSet();
    return 0;
}