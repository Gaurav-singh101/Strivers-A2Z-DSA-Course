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
    
//     vector<int> st ; 

//     while(temp != NULL){
//         st.push_back(temp -> data);
//         temp = temp -> next ; 
//     }

//     node* newnode = head ;

//     while(newnode != NULL){
//         newnode -> data = st.back();
//         st.pop_back();
//         newnode = newnode -> next ;
//     }
//     return head ;
// }


// int main(){

//     vector<int> arr = {2 , 5 , 8 , 7};

//     node* head = convertArr2LL(arr);

//     node* temp = head ;

//     while(temp != NULL){
//         cout<< temp -> data << " ";
//         temp = temp -> next ;
//     }

//     cout<<endl<<"Reverse Linked list :- "<<endl ;

//     node* reverse = ReverseLL(head);

//     while(reverse != NULL){
//         cout<< reverse -> data << " ";
//         reverse = reverse -> next ;
//     }


//     return 0 ;
// }
