#include<bits/stdc++.h>
using namespace std ; 


struct node {
    public: 
    int data ; 
    node *next ;

    public:
    node(int data1 , node* next1){
        data = data1 ;
        next = next1 ;
    }

    public:
    node(int data1){
        data = data1 ;
        next = nullptr ;
    }
};

node * convertArr2LL(vector<int> &arr){
    node* head = new node(arr[0]);
    node* temp = head ; 

    for(int i = 1 ; i < arr.size() ; i++){
        node* newnode = new node(arr[i]);
        temp-> next = newnode ; 
        temp = temp -> next ;
    }
    return head ;
}

node * insertAtRandom(node *head , int ele , int value){
    if(head == NULL){
        return new node(ele);
    }
    if(head -> data == value){
        node * newnode = new node(ele , head);
        head = newnode ;
        return head ;
    }

    node * temp = head ;

    while(temp -> next -> data != value){
        temp = temp -> next ;
    }
    
    node * newnode = new node(ele , temp -> next);
    temp -> next = newnode ;

    return head ;
}

void printallLL(node *head){
    if(head == NULL) cout<<"No element" ; 
    node * temp = head ; 

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp -> next ;
    }

}

int main(){

    vector<int> arr = {12 , 5 , 8 , 7};

    node* head = convertArr2LL(arr);

    int value = 12 ; 
    
    head = insertAtRandom(head , 14 , value);

    printallLL(head);

    return 0 ;
}