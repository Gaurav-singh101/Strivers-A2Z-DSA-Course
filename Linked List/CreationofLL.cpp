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


// int main(){

//     vector<int> arr = {2 , 5 , 8 , 7};

//     node* head = convertArr2LL(arr);

//     node* temp = head ;

//     while(temp -> next != NULL){
//         cout<< temp -> data << " ";
//         temp = temp -> next ;
//     }
//     cout<< temp -> data;

//     return 0 ;
// }


////////////////////  Optimal Approch  ///////////////////////



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

// node* ReverseLL(node* head){
//     node* temp = head ; 
//     node* prev = NULL ; 

//     while(temp != NULL){
//         node* front = temp -> next ;
//         temp->next = prev ; 
//         prev = temp ; 
//         temp = front ; 
//     }

//     return prev ;
// }



// int main(){

//     vector<int> arr = {2 , 5 , 8 , 7};

//     node* head = convertArr2LL(arr);

//     node* temp = head ;

//     while(temp != NULL){
//         cout<< temp -> data << " ";
//         temp = temp -> next ;
//     }

//     cout<<endl<<"Reverse Linked list : " ;

//     node* reverse = ReverseLL(head) ;

//     while(reverse != NULL){
//         cout<< reverse -> data << " ";
//         reverse = reverse -> next ;
//     }

//     return 0 ;
// }






////////////////////////////  Optimize solution  ////////////////////



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

node* ReverseLL(node* head){

    if(head == NULL || head -> next == NULL){
        return head ;
    }

    node* newhead = ReverseLL(head -> next) ;
    node* front = head -> next ; 
    front -> next = head ; 
    head -> next = NULL; 
    return newhead ;
}



int main(){

    vector<int> arr = {2 , 5 , 8 , 7};

    node* head = convertArr2LL(arr);

    node* temp = head ;

    while(temp != NULL){
        cout<< temp -> data << " ";
        temp = temp -> next ;
    }

    cout<<endl<<"Reverse Linked list : " ;

    node* reverse = ReverseLL(head) ;

    while(reverse != NULL){
        cout<< reverse -> data << " ";
        reverse = reverse -> next ;
    }

    return 0 ;
}

