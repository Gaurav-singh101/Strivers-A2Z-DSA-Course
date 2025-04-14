// #include<bits/stdc++.h>
// using namespace std ;

// struct node{
//     public :
//     int data ;
//     node *next ;

//     public:
//     node(int data1 , node* next1){
//         data = data1;
//         next = next1;
//     }

//     public:
//     node(int data1){
//         data = data1;
//         next = NULL;  
//     }
// };

// node *createLL(vector<int> &arr){
//     node *head = new node(arr[0]);
//     node *temp = head ;
//     node *for_createLoop ; 

//     for(int i = 1 ; i< arr.size() ; i++){
//         node *newnode = new node(arr[i]);

//         if(i == 2){                                     // For creating loop 
//             for_createLoop = newnode ;
//         }

//         temp -> next =  newnode ;
//         temp = newnode ;
//     }

//     temp -> next = for_createLoop ;  // Create Loop 

//     return head ;
// }

// void printLL(node *head){
//     node *temp = head ; 

//     while(temp != NULL){
//         cout<<temp ->data<<" ";
//         temp = temp -> next ;
//     }
    
// }

// void CheckLengthOfLoop(node *head){
//     node *temp = head ;
//     unordered_map<node* , int> mapp ; 
//     int timer = 1 ;

//     while(temp != NULL){
//         if(mapp.find(temp) != mapp.end()){
//             int value = mapp[temp];
//             cout<<"The lenght of linked list is : "<<timer - value;
//             break;
//         }
//         mapp[temp] = timer;
//         timer ++ ;
//         temp = temp -> next ;
//     }
// }

// int main(){

//     vector<int> arr = {3 , 5 , 7 ,1, 9};

//     node *head = createLL(arr);

//     // printLL(head);


//     cout<<endl ;

//     CheckLengthOfLoop(head);

//     return 0 ;
// }






/////////////////////////////









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

int findLenght(node* slow , node* fast){
    int count = 1 ;
    fast = fast -> next ;

    while(slow != fast){
        count++ ; 
        fast = fast -> next ;
    }
    return count ;
}

int CheckLengthOfLoop(node *head){
    node *slow = head , *fast = head ;

    while(fast -> next!= NULL && fast -> next -> next != NULL){
        slow = slow ->next ;
        fast = fast ->next ->next ;

        if(slow == fast){
            return findLenght(slow , fast);
        }
    }
    return -1;
}

int main(){

    vector<int> arr = {3 , 5 , 7 , 1, 9};

    node *head = createLL(arr);

    // printLL(head);


    cout<<endl ;

    cout<<"Lenght of linked list : "<<CheckLengthOfLoop(head);

    return 0 ;
}