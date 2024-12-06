#include<iostream>
#include <list>


using namespace std ; 

void exList(){

    // list <int> l ; 
    // l.push_back(2) ;
    // l.emplace_back(7);

    // l.push_front(9);
    // l.emplace_front(8);

    // list <pair<int , int >> li ;
    // li.push_back({1 ,2});


///////////////////////////////////////////


// list <int> l1; 
// l1.push_back(3);    // {3}
// l1.push_front(9);   // {9 ,3}
// l1.push_front(4);   // {4 ,9 ,3}
// l1.push_front(5);    // {5 ,4 ,9 ,3}

// access the element of the list 

// 1 st way 

// list <int> :: iterator it = l1.begin();
// cout<< *(it) <<endl;
// it++ ; 
// cout<<*(it) << endl ;


// 2 nd way 

// for(auto it = l1.begin() ; it != l1.end() ; it++){
//     cout<< *(it) << " " << endl ;
// }

// 3 rd  way 

// for(auto it : l1){
//        cout<< it << " " << endl ; 
// }


/////////////////////////////


// list <int> l1; 
// l1.push_back(3);    // {3}
// l1.push_front(9);   // {9 ,3}
// l1.push_front(4);   // {4 ,9 ,3}
// l1.push_front(5);    // {5 ,4 ,9 ,3}


// Erase list element 

// l1.erase(l1.begin());   // delete 1st  element from the list    {4 ,9 ,3}


// list <int> :: iterator it = l1.begin();
// it++ ;
// l1.erase(it); 

// for(auto it : l1){             // { 4 , 3 }
//     cout<< (it) << endl;
// }


/////////////////////////////////////
// Insert element 

list <int> l1; 
l1.push_back(3);    // {3}
l1.push_front(9);   // {9 ,3}
l1.push_front(4);   // {4 ,9 ,3}
l1.push_front(5);    // {5 ,4 ,9 ,3}

l1.insert(l1.begin() , 300) ; 
}

int main(){

    exList();



    return 0 ;
}