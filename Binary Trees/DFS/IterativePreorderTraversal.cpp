// Question - Given the root of a binary tree, return the preorder traversal of its nodes' values.

// Example 1:

// Input: root = [1,null,2,3]

// Output: [1,2,3]


#include<bits/stdc++.h>
using namespace std ; 

struct Node{
    int data ; 
    Node *left ; 
    Node *right ;

    public:
    Node(int data1){
        data = data1 ; 
        left = NULL ; 
        right = NULL ; 
    }
};


vector<int> PreOrder(Node *RootNode){
    vector<int> Res ; 
    if(RootNode == NULL)return Res ;
    stack<Node *>st ;

    st.push(RootNode);

    while(!st.empty()){
        Node* node = st.top();
        st.pop();
        Res.push_back(node -> data);

        if(node -> right != NULL){st.push(node -> right);}
        if(node -> left != NULL){st.push(node -> left);}
    }
    return Res ;
}


int main(){

    Node * RootNode = new Node(1);  // Level = 1 

    RootNode -> left = new Node(2);  // Level = 2
    RootNode -> right = new Node(3);

    RootNode -> left -> left = new Node(4);  // Level = 3
    RootNode -> left -> right = new Node(5);
    RootNode -> right -> left = new Node(6);
    RootNode -> right -> right = new Node(7);

    vector<int> Traversal = PreOrder(RootNode);

    for(auto it : Traversal){
        cout<<it<<" , ";
    }

    return 0 ;
}