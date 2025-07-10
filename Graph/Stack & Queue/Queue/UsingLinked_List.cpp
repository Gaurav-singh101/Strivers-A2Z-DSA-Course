#include<bits/stdc++.h>
using namespace std ; 

struct node{
    int data ;
    node* next ;

    public: 
    node(int data1 , node * next1){
        data = data1 ; 
        next = next1 ; 
    }

    node(int data1){
        data = data1 ; 
        next = NULL ;
    }
};

class MyQueue{
    node* start = NULL ; 
    node* end = NULL ; 
    
    public:
    void push(int x){
        node* temp = new node(x);
        if(start == NULL && end == NULL){
            start = temp ; 
            end = temp ;
        } else {
            end->next = temp;
            end = temp;
        }
    }

    int pop(){
        if (start == NULL) {
            cout << "Queue underflow!" << endl;
            return -1;
        }
        int x = start->data ; 
        node* prev = start ;
        start = start->next ; 
        delete prev;
        if (start == NULL) end = NULL; // also reset end if MyQueue becomes empty
        return x ;
    }


    int peek(){
        return start -> data ; 
    }

    bool isEmpty(){
        if(start == NULL && end == NULL){
            return true ;
        }
        return false ;
    }

};


int main() {

    MyQueue q;

    cout << "Is MyQueue empty? " << (q.isEmpty() ? "Yes" : "No") << endl;

    // Push some elements
    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Peek: " << q.peek() << endl; // Should print 10

    cout << "Pop: " << q.pop() << endl;   // Should print 10
    cout << "Peek: " << q.peek() << endl; // Should print 20

    q.push(40);
    cout << "Pop: " << q.pop() << endl;   // Should print 20
    cout << "Pop: " << q.pop() << endl;   // Should print 30
    cout << "Pop: " << q.pop() << endl;   // Should print 40

    // Try popping from empty MyQueue
    cout << "Pop: " << q.pop() << endl;   // Should indicate underflow

    cout << "Is MyQueue empty? " << (q.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}
