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

node * deletePosition(node *head , int ele){
    if(head == NULL) return head ;
    if(head ->data  == ele){
        node *temp = head;
        head = head -> next ; 
        free(temp);
        return head ;
    } 

    node * temp = head ; 
    node * prev = nullptr ;

    while(temp != NULL){

        if(temp ->data == ele){
            prev -> next = prev ->next ->next ;
            free(temp); 
            break;
        }
        prev = temp ; 
        temp = temp -> next ;
    }
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
    
    head = deletePosition(head , 8);

    printallLL(head);

    return 0 ;
}