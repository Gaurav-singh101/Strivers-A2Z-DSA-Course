#include<bits/stdc++.h>
using namespace std ; 

class MinStack{
    stack<int> st ;
    long long mini = INT_MAX ;

    public: 

    void push(int x){
        if(st.empty()){
            st.push(x);
            mini = x ;
        }else{
            if(x > mini){
                st.push(x);
            }else{
                st.push(2 * x - mini) ;
                mini = x ;
            }
        }
    }

    void pop(){
        if(st.empty()){
            exit(0);
        }
        int x = st.top();
        st.pop();

        if(x < mini){
            mini = 2 * mini - x ;
        }
    }


    int peek(){
        int x = st.top();
        if(x < mini){
            return mini ; 
        }
        return x ;
    }

    bool isEmpty(){
        return st.empty();
    }

    int MinofStack(){
        return mini;
    }

};

int main(){

    MinStack S ; 

    cout<<"Stack is empty or not : "<<S.isEmpty()<<endl ;
    S.push(9);
    S.push(5);
    S.push(3);
    S.push(13);
    S.push(33);
    S.pop();
    cout<<"Minimum element is stack : "<<S.MinofStack()<<endl ;
    S.pop();
    S.pop();
    cout<<"Minimum element is stack : "<<S.MinofStack()<<endl ;

    return 0 ; 
}