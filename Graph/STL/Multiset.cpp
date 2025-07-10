// sorted but not unique 

#include<bits/stdc++.h>
using namespace std ;

void Multiset(){

    multiset<int> ms;

    ms.insert(1);
    ms.insert(2);
    ms.insert(3);
    ms.insert(4);
    ms.insert(5);
    ms.insert(6);
    ms.insert(1);
    ms.insert(1);

    ms.erase(1) ; // erase all one 

    // only a single element 

    // ms.erase(ms.find(1));

    // ms.erase(ms.find(1) , ms.find(1) + 2);

    // Rest all function same as set 

    ////////////////////////////////

    for(auto it = ms.begin(); it != ms.end() ; ++it){
        cout<< *it <<"  ";
    }
    cout<<endl ;


}

int main(){

    Multiset();


    return 0 ;
    
    }