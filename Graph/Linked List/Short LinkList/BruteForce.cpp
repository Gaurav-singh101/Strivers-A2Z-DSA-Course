#include<bits/stdc++.h>
using namespace std ;

struct Node{
    int data ; 
    Node* next ; 

    Node(int data1 , Node *next1){
        data = data1 ; 
        next = next1 ;
    }

    Node(int data1){
        data = data1 ; 
        next = NULL ;
    }
};

Node *convertLL(vector<int> &arr){
    Node *head = new Node(arr[0]);
    Node *temp = head ;

    for(int i = 1 ; i < arr.size() ; i++){
        Node *newnode = new Node(arr[i]);
        temp -> next = newnode ; 
        temp = newnode;
    }
    return head ;
}

void printLL(Node *head){

    Node *temp = head ; 

    while(temp != NULL){
        cout<<temp-> data <<" , ";
        temp = temp -> next ;
    }
}

Node *SortLL(Node *head){
    vector<int> NewArr ; 

    Node *temp = head ; 

    while(temp != NULL){
        NewArr.push_back(temp->data);
        temp = temp -> next ; 
    }

    sort(NewArr.begin() , NewArr.end());

    temp = head ; 

    int i = 0 ;
    while(temp != NULL){
        temp -> data = NewArr[i];
        i++ ; 
        temp = temp -> next ; 
    }

    return head ;
}


int main(){

    vector<int> arr = {4 , 5 , 7 ,1 , 3};

    Node *head = convertLL(arr);
    printLL(head);

    cout<<endl ;

    Node *Sorted = SortLL(head);
    printLL(head);

    return 0 ;
}
