#include<iostream>
#include<bits/stdc++.h>

using namespace std ; 

void Expq(){


    //////////////////   Max heap 

    // priority_queue <int> pq ;

    // pq.push(8) ;
    // pq.push(3) ;
    // pq.push(5) ;
    // pq.push(2) ;
    // pq.push(9) ;

    // cout << pq.top() << endl ;
    // pq.pop();
    // cout << pq.top() << endl;

    ///////////////////////  Min heap 

    priority_queue <int , vector<int> , greater<int>> pq ;

    pq.push(8) ;
    pq.push(3) ;
    pq.push(5) ;
    pq.push(2) ;
    pq.push(9) ;

    cout << pq.top() << endl ;
    pq.pop();
    cout << pq.top() << endl;




}

int main (){

    Expq() ;
     

    return 0 ;
}