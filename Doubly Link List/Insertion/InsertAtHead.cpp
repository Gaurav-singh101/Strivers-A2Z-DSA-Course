#include<bits/stdc++.h>
using namespace std ; 

struct  Node{
    public:
    int data ; 
    Node* next ; 
    Node* prev ;

    public:
    Node(int data1 , Node* next1 , Node* prev1){
        data = data1 ; 
        next = next1 ;
        prev = prev1 ;
    }

    Node(int data1){
        data = data1 ; 
        prev = nullptr ;
        next = nullptr ;
    }

    Node(int data1 , Node* prev1){
        data = data1 ; 
        prev = prev1 ;
        next = nullptr ;
    }



};

Node* ArrToDLL(vector<int> arr){
    Node* head = new Node(arr[0]);
    Node* prev = head ;

    for(int i = 1 ; i < arr.size() ; i++){
        Node* newnode = new Node(arr[i] , prev);
        prev -> next = newnode ;
        prev = newnode ;
    }
    return head ;
}

Node* InsertAtHead(Node* head , int val){
   if(head == NULL)return new Node(val);

   Node* newnode = new Node(val , head , nullptr);
   head = newnode ; 

   return head ;
}

void PrintDLL(Node* head){
    Node* temp = head ; 

    while(temp != NULL){
        cout<< temp ->data << " "; 
        temp = temp -> next ;
     }
}


int main(){

    vector<int> arr = {4 , 8 , 9 , 13 , 19};

    Node* head = ArrToDLL(arr);

    int val = 5 ;

    head = InsertAtHead(head , val);

    PrintDLL(head);


    return 0 ;
} 