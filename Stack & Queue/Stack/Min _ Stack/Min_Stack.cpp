#include<bits/stdc++.h>
using namespace std ; 

class MinStack{
    stack<pair<int , int>> st ;

    public: 

    void push(int x){
        if(st.empty()){
            st.push({x , x});
        }else{
            st.push({x , min(x , st.top().second)});
        }
    }

    int pop(){
        int x = st.top().first ;
        st.pop();
        return x ;
    }
    int peek(){
        return st.top().first ;
    }

    bool isEmpty(){
        return st.empty();
    }

    int MinofStack(){
        return st.top().second ;
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

    cout<<"Poped out element : "<<S.pop()<<endl ;
    cout<<"Minimum element is stack : "<<S.MinofStack()<<endl ;
    cout<<"Poped out element : "<<S.pop()<<endl ;
    cout<<"Minimum element is stack : "<<S.MinofStack()<<endl ;

    return 0 ; 
}