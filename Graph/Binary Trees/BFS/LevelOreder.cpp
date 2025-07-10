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


vector<vector<int>> LevelOreder(node * root){
    vector<vector<int>> ans ;
    if(root == NULL)return ans ; 

    queue<node *> q ; 
    q.push(root);

    while(!q.empty()){
        int size = q.size();
        vector<int> level ; 

        for(int i = 0 ;  i < size ; i++){
            node *treeNode = q.front();
            q.pop();

            if(treeNode ->left != NULL){ q.push(treeNode -> left);}
            if(treeNode -> right != NULL){ q.push(treeNode -> right);}

            level.push_back(treeNode -> data);
        }
        ans.push_back(level);
    }
    return ans ;
}




int main(){

    node* root = new node(1);  // 1st level


    root -> left = new node(2);  // 2nd Level 
    root -> right = new node (3);


    root -> left -> left = new node(4);  // 3rd level
    root -> left -> right = new node(5);  
    root -> right -> left  = new node (6);
    root -> right -> right = new node (7);

    vector<vector<int>> ans = LevelOreder(root);


    for (auto& row : ans) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl; // move to next line after each row
    }

    return 0 ;
}