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

int lengthofLL(node * head){
    int cnt = 0 ; 
    node * temp = head ; 
    while(temp){
        cout<<temp->data<<" ";
        temp = temp -> next ;
        cnt++ ;
    }
    cout<<endl ;
    return cnt ;
}


int main(){

    vector<int> arr = {2 , 5 , 8 , 7};

    node* head = convertArr2LL(arr);

    cout<<"length of Link list : "<<lengthofLL(head);


    return 0 ;
}
