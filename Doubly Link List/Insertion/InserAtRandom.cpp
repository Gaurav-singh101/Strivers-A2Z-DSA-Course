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

Node* InsertAtRandom(Node* head , int val , int position){
    if (head == NULL) return new Node(val, NULL, NULL);
    Node* temp = head ;

   int cnt = 1 ; 

   while(temp != NULL && cnt < position - 1){
        cnt++ ; 
        temp = temp -> next ;
   }

   Node * back = temp -> prev ; 
   Node * front = temp -> next ; 

   if(back == NULL){
        Node * newnode = new Node(val , head , nullptr);
        temp -> prev = newnode ;
        head = newnode ;
   }else if(front == NULL){
        Node * newnode = new Node(val , nullptr , temp);
        temp-> next = newnode ;
   }else{
        Node * newnode = new Node(val , temp->next , temp);
        temp -> next = newnode ; 
        front -> prev = newnode ;
   }

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
    int position = 5;

    head = InsertAtRandom(head , val , position);

    PrintDLL(head);


    return 0 ;
} 