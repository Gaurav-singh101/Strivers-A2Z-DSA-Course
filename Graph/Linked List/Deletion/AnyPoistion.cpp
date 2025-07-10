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

node * deletePosition(node *head , int k){
    if(head == NULL) return head ;
    if(k == 1){
        node *temp = head;
        head = head -> next ; 
        free(temp);
        return head ;
    } 
    int cnt = 0 ;
    node * temp = head ; 
    node * prev = nullptr ;

    while(temp != NULL){
        cnt++ ;
        if(cnt == k){
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
    
    head = deletePosition(head , 3);

    printallLL(head);

    return 0 ;
}