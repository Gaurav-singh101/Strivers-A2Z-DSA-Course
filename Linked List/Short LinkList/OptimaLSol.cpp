#include<bits/stdc++.h>
using namespace std ; 

struct Node{
    int data ; 
    Node * next ; 

    public: 

    Node(int data1 , Node *next1){
        data = data1 ; 
        next = next1 ; 
    }
    Node(int data1){
        data = data1;
        next = NULL ;
    }
};


Node *CreateLL(vector<int> &arr){
    Node *head = new Node(arr[0]);

    Node *temp = head ; 

    for(int i = 1 ; i < arr.size() ; i++){
        Node *newnode = new Node(arr[i]);
        temp -> next = newnode ; 
        temp = newnode ; 
    }
    return head ;
}

void PrintLL(Node *head){
    Node *temp = head ; 

    while(temp != NULL){
        cout<<temp -> data <<" , ";
        temp = temp -> next ; 
    }
}

Node *MergeSort(Node *left , Node *right){
    Node *head = new Node(-1);
    Node *temp = head ;

    while(left != NULL && right != NULL){
        if(left -> data <= right -> data){
            Node *newnode = new Node(left -> data);
            temp -> next = newnode ;
            left = left -> next ; 
        }else{
            Node *newnode = new Node(right -> data);
            temp -> next = newnode ;
            right = right -> next ; 
        }
        temp = temp -> next ;
    }

    while(left !=  NULL){
        Node *newnode = new Node(left -> data);
        temp -> next = newnode ;
        temp = temp -> next ; 
        left = left -> next ; 
    }

    while(right !=  NULL){
        Node *newnode = new Node(right -> data);
        temp -> next = newnode ;
        temp = temp -> next; 
        right = right -> next ; 
    }
    return head -> next;
}

Node *MidNumber(Node *head){
    Node* slow = head;
    Node* fast = head;
    Node* prev = NULL;

    while (fast != NULL && fast->next != NULL) {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    if (prev != NULL)
        prev->next = NULL; 

    return slow;
}

Node *SortLL(Node *head){
    if(head == NULL || head -> next == NULL){
        return head ;
    }

    Node *midNode = MidNumber(head);
    Node *left = SortLL(head) ; 
    Node *right = SortLL(midNode);

    return MergeSort(left , right);
}

int main(){

    vector<int> arr = {3 , 7 , 9 , 5 , 1 , 0};

    Node *head = CreateLL(arr);
    PrintLL(head);
    cout<<endl ;
    Node *NewHead = SortLL(head);
    PrintLL(NewHead);

    return 0 ;
}