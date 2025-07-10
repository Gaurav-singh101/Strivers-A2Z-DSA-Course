// #include<bits/stdc++.h>
// using namespace std ; 

// struct node{
//     public: 
//     int data ; 
//     node* next ;

//     public: 
//     node(int data1 , node* next1){
//         data = data1 ; 
//         next = next1 ;
//     }

//     public:
//     node(int data1){
//         data = data1 ;
//         next = nullptr ;
//     }
// };

// node * convertArr2LL (vector<int> &arr){
//     node * head = new node(arr[0]);
//     node * mover = head ;

//     for(int i = 1 ; i < arr.size() ; i++){
//         node * temp = new node(arr[i]);   
//         mover -> next = temp ;
//         mover = temp ;
//     }
//     return head ;
// }

// node* middleNode(node* head) {
//     node* temp = head ; 
//     int cnt = 1 ; 

//     while(temp -> next != NULL){
//         cnt++ ; 
//         temp = temp -> next ;
//     }
//     node* target = head;
//     for (int i = 1; i < cnt / 2; i++) {
//         target = target->next;
//     }
//     return target -> next ;   
// }


// int main(){

//     vector<int> arr = {2 , 5 , 8 , 7 , 9};

//     node* head = convertArr2LL(arr);

//     node* temp = head ;

//     while(temp != NULL){
//         cout<< temp -> data << " ";
//         temp = temp -> next ;
//     }

//     cout<<endl ;

//     node* midNode = middleNode(head);

// cout<< "Mid Node of the linked list is : "<< midNode->data;

//     return 0 ;
// }





/////////////   Tantoise & Hare Algorightm ////////////


#include<bits/stdc++.h>
using namespace std ; 

struct node{
    public: 
    int data ; 
    node* next ;

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

node * convertArr2LL (vector<int> &arr){
    node * head = new node(arr[0]);
    node * mover = head ;

    for(int i = 1 ; i < arr.size() ; i++){
        node * temp = new node(arr[i]);   
        mover -> next = temp ;
        mover = temp ;
    }
    return head ;
}

node* middleNode(node* head) {
    node* slow = head ; 
    node* fast = head ; 

    while(fast != NULL && fast -> next != NULL){
        slow = slow -> next;
        fast = fast -> next -> next  ;
    }

    return slow;
}


int main(){

    vector<int> arr = {2 , 5 , 8 , 7 , 9};

    node* head = convertArr2LL(arr);

    node* temp = head ;

    while(temp != NULL){
        cout<< temp -> data << " ";
        temp = temp -> next ;
    }

    cout<<endl ;

    node* midNode = middleNode(head);

cout<< "Mid Node of the linked list is : "<< midNode->data;

    return 0 ;
}
