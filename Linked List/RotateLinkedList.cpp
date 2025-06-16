#include<bits/stdc++.h>
using namespace std; 

struct  node{
    public: 

    int data ; 
    node *next ;

    node(int data1 ,node* next1){
        data = data1 ;
        next = next1 ;
    }

    node(int data1){
        data = data1 ; 
        next = NULL ;
    }
};

node *convertLL(vector<int> arr){
    node *head = new node(arr[0]);

    node *temp = head ;
    for (int i = 1; i < arr.size(); ++i) {
        temp->next = new node(arr[i]);
        temp = temp->next;
    }

    return head ;
}

void printLL(node *head){
    node *temp = head ;

    while(temp != NULL){
        cout<<temp -> data<<" ";
        temp = temp -> next ;
    }
}

node *rotateLL(node *head , int k){
    int n = 0 ; 
    node *temp = head ;

    while(temp != NULL){
        n++ ; 
        temp = temp -> next ;
    }

    if(k % n == 0) return head ;

    k = k % n ;

    temp = head ;
    for(int i = 1 ; i < n - k ; i++){
        temp = temp -> next ;
    }

    node* prev = temp ;
    temp = temp -> next ; 
    node* front = temp ;

    while(front -> next != NULL){
        front = front -> next ;
    }

    front -> next = head ;
    prev -> next = NULL ;

    return temp ;
}


int main(){

    vector<int> arr = {2 , 4 , 5 , 8 , 9};

    node* head  = convertLL(arr);

    printLL(head);

    node* newhead = rotateLL(head , 8);
    cout<<endl ;
    printLL(newhead);

    return 0 ;
}