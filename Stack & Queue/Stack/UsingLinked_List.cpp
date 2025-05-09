#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node* next;

    node(int data1, node* next1) {
        data = data1;
        next = next1;
    }

    node(int data1) {
        data = data1;
        next = nullptr;
    }
};

class MyStack {
    node* top = NULL;

public:
    void push(int x) {
        node* temp = new node(x, top);
        top = temp;
    }

    void pop() {
        if (top == NULL) {
            cout << "Stack is empty, cannot pop." << endl;
            return;
        }
        node* prev = top;
        top = top->next;
        delete prev;
    }

    int peek() {
        if (top == NULL) {
            cout << "Stack is empty." << endl;
            return -1;
        }
        return top->data;
    }

    bool isEmpty() {
        return top == NULL;
    }

    ~MyStack() {
        while (!isEmpty()) {
            pop();
        }
    }
};

int main() {
    MyStack s;

    s.push(5);
    s.push(10);
    s.push(15);

    cout << "Top element: " << s.peek() << endl;

    s.pop();
    cout << "Top after one pop: " << s.peek() << endl;

    s.pop();
    s.pop();
    s.pop(); 

    cout << "Is stack empty? " << (s.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}
