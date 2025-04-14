#include<bits/stdc++.h>
using namespace std ;

struct node{
    public :
    int data ;
    node *next ;

    public:
    node(int data1 , node* next1){
        data = data1;
        next = next1;
    }

    public:
    node(int data1){
        data = data1;
        next = NULL;  
    }
};

node *createLL(vector<int> &arr){
    node *head = new node(arr[0]);
    node *temp = head ;
    node *for_createLoop ; 

    for(int i = 1 ; i< arr.size() ; i++){
        node *newnode = new node(arr[i]);

        if(i == 2){                                     // For creating loop 
            for_createLoop = newnode ;
        }

        temp -> next =  newnode ;
        temp = newnode ;
    }

    temp -> next = for_createLoop ;  // Create Loop 

    return head ;
}

void printLL(node *head){
    node *temp = head ; 

    while(temp != NULL){
        cout<<temp ->data<<" ";
        temp = temp -> next ;
    }
    
}

void StartingPointLoop(node *head){
    unordered_map<node* , int>mapp ;
    node* temp = head ;

    while(temp != NULL){
        if(mapp.find(temp) != mapp.end()){
            cout<<temp -> data ;
            break;
        }
        mapp[temp]++ ;
        temp = temp -> next ;
    }
}

int main(){

    vector<int> arr = {3 , 5 , 7 , 1, 9};

    node *head = createLL(arr);

    // printLL(head);


    cout<<endl ;

    StartingPointLoop(head);


    return 0 ;
}