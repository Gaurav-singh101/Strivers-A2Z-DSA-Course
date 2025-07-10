#include<bits/stdc++.h>
using namespace std ; 

class Queue{
    int size ; 
    int start ; 
    int end ; 
    int *Q ; 
    int C_size ; 
    
    public : 
    Queue(){
        size = 10 ; 
        start = -1 ; 
        end = -1 ; 
        Q = new int[size];
        C_size = 0 ; 
    }
    void push(int x){
        if(C_size < size){
            if(start == -1 && end == -1){
                start++ ; end++ ; 
            }else{
                end = (end + 1) % size;
            }
            Q[end] = x ;
            C_size++ ;
        }else{
            cout<<"Queue is full" ;
        }
    }

    int pop() {
        if (C_size == 0) {
            return -1;
        }
        int x = Q[start];
        if (start == end) {
            start = end = -1;
        } else {
            start = (start + 1) % size;
        }
        C_size--;
        return x;
    }
    int peek() {
        if (C_size == 0 || start == -1) {
            return -1;
        }
        return Q[start];
    }
    bool isEmpty(){
        if (C_size == 0 || start == -1) {
            return true;
        }
        return false ;
    }
};


int main(){

    Queue q;

    q.push(9);
    cout<<q.peek()<<endl;
    cout<<q.isEmpty()<<endl ;
    cout<<q.pop()<<endl ;
    cout<<q.isEmpty()<<endl ;

    return 0 ;
}