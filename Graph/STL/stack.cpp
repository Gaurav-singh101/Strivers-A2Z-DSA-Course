#include<iostream>
#include<stack>

using namespace std ; 

void Exstack(){

    stack <int> st ;

    st.push(8);
    st.push(9);
    st.emplace(5);

    // cout<< st.top() <<endl ;    // print last entered element int stack

    // cout<< st.size() <<endl ;    // size of the stack 

    // cout<< st.empty() << endl ;    // 0 and 1 value return  


    stack <int> st1 ; 

    st1.push(4);
    st1.push(1);
    st1.emplace(7);

    st.swap(st1) ;

    // Since we cannot iterate over a stack directly, we use a loop to pop elements
    while (!st.empty()) {
        cout << st.top() << endl; // Access the top element
        st.pop(); // Remove the top element
    }










}

int main (){

    Exstack();



    return 0 ;
}