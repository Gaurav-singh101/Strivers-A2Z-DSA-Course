#include<bits/stdc++.h>
#include<deque>

using namespace std ;

void exdeque(){

    // deque <int> dq ;

    // dq.push_back(9);    // {9}
    // dq.push_back(5);   // {9 ,5}
    // dq.push_back(7);   // {9 ,5  ,7}
    // dq.emplace_back(0);  // {9 ,5 ,7 ,0}
    // dq.emplace_front(2);  // {2 ,9 ,5 ,7 ,0}
    
    // for(auto it : dq){
    //     cout<< (it) << endl ;
    // }


//////////////////////////


    deque <int> dq ;

    dq.push_back(9);    // {9}
    dq.push_back(5);   // {9 ,5}
    dq.push_back(7);   // {9 ,5  ,7}
    dq.emplace_back(0);  // {9 ,5 ,7 ,0}
    dq.emplace_front(2);  // {2 ,9 ,5 ,7 ,0}


    // deque <int> :: iterator it = dq.begin();
    // cout<< *(it)<<endl ;

    // deque <int> :: iterator it = dq.end();
    // cout<< *(it)<<endl ;


    // dq.insert(dq.begin() , 300);

    // dq.insert(dq.begin()  + 3, 2 , 300);

    // for(auto it : dq){
    //     cout<< (it) <<endl ;
    // }

    












}

int main(){

    exdeque();


    return 0 ;
}