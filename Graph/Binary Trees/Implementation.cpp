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


int main(){

    node* root = new node(5);  // 1st level


    root -> left = new node(10);  // 2nd Level 
    root -> right = new node (15);


    root -> left -> left = new node(10);  // 3rd level
    root -> left -> right = new node(10);  
    root -> right -> left  = new node (15);
    root -> right -> right = new node (15);


    return 0 ;;
}