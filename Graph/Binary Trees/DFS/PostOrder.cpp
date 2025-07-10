#include<bits/stdc++.h>
using namespace std ; 

struct node{
    int data ; 
    node* left ; 
    node* right ; 

    public: 
    node(int x){
        data = x ; 
        left = NULL ;
        right = NULL ;
    }
};

void fun(vector<int> &arr , node *root){
    if(root == NULL){
        return ;
    }

    fun(arr , root -> left);
    fun(arr , root -> right);
    arr.push_back(root -> data);
}


vector<int> postoreder(node* root){
    vector<int> arr ; 

    fun(arr , root);

    return arr ;
}


int main(){

    node* root = new node(1);  // 1st level


    root -> left = new node(2);  // 2nd Level 
    root -> right = new node (3);


    root -> left -> left = new node(4);  // 3rd level
    root -> left -> right = new node(5);  
    root -> right -> left  = new node (6);
    root -> right -> right = new node (7);


    vector<int> PostOreder = postoreder(root);

    for(auto it : PostOreder){
        cout<<it<<" , ";
    }

    return 0 ;
}