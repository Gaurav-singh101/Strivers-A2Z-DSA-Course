#include<iostream>
#include<vector>

using namespace std ;

void exvector(){

    // vector<int> v ;
    // v.push_back(1);   // add on element from back side of the vector 
    // v.emplace_back(2);  // same as push back 
    // cout<<v[0]<<" , "<<v[1]<<endl ; 

    // vector<pair<int , int >> p1 ;
    // p1.push_back({1 ,2});
    // p1.emplace_back(2 , 3);
    // cout << "(" << p1[1].first << ", " << p1[1].second << ")" << endl;

    //////////////////////////////////
 
    // vector <int> v(5);   // { ------- } some garbage value 
    // vector <int> v1(5 , 20);   // {20 ,20 ,20 ,20 ,20}
    // vector <int> v2(v1) ; // Another vector v2 copy the v1 

    ///////////////////////////////////

    // vector<int> s ; 
    // s.push_back(1);
    // s.push_back(2);
    // s.push_back(3);
    // s.push_back(4);
    // s.push_back(5);
    // s.push_back(6);
    // s.push_back(7);

    // cout<<s[0] << " , " << s[4] <<endl ;
    
    // vector <int> :: iterator it = s.begin() ;  // pointing to the memory
    // cout<< * (it) <<" ";
    // it++;
    // cout<< * (it) <<" ";

    // vector <int> :: iterator in = s.end() ;
    // cout<< * (in) << " ";
    // in-- ; 
    // cout<< * (in) << " ";


/////////////////////////////////////////////////////


    // vector<int> s ; 
    // s.push_back(1);
    // s.push_back(2);
    // s.push_back(3);
    // s.push_back(4);
    // s.push_back(5);
    // s.push_back(6);
    // s.push_back(7);


    // for(vector <int> :: iterator it = s.begin() ; it != s.end() ; it++){   // print the vector using loop  1st way 
    //         cout<< *(it) << " ";
    // }


    // for(auto it = s.begin() ; it != s.end() ; it++){     // print the vector using loop  2nd way 
    //         cout<< *(it) << " ";
    // }

    // for(auto it : s){                                 // print the vector using loop  3rd way 
    //         cout<< it << " ";
    // }




//////////////// Erase element from vector //////////////////////


    // vector<int> s ; 
    // s.push_back(1);
    // s.push_back(2);
    // s.push_back(3);
    // s.push_back(4);
    // s.push_back(5);
    // s.push_back(6);
    // s.push_back(7);

    // s.erase(s.begin() + 1);   // { 1 ,3 ,4 ,5 ,6 ,7}

    //     for(auto it : s){                         
    //         cout<< it << " " << ;
    // }   cout<<endl ;


    // s.erase(s.begin() + 2 , s.begin() + 4);  // { 1 ,3 , 6 ,7}

        // for(auto it : s){                             
        //     cout<< it << " ";
    // }  cout<<endl ;



/////////////////  Insert element  /////////////////



    vector<int> s ; 
    s.push_back(1);
    s.push_back(2);
    s.push_back(3);
    s.push_back(4);
    s.push_back(5);
    s.push_back(6);
    s.push_back(7);

    // s.insert(s.begin() , 300);  //(300 , 1, 2, 3, 4, ,5 ,6 , 7)

    // for(auto it : s){                             
    // cout<< it << " ";
    // }  cout<<endl ;

    // s.insert(s.begin() + 2 , 3 ,50); //(300 ,1 ,50 , 50 , 50 , 2 ,3 ,4 ,5 ,6 , 7)

    // for(auto it : s){                             
    //     cout<< it << " ";
    // }  cout<<endl ;




// vector<int>t(2, 300);

// s.insert(s.begin() + 1 , t.begin() , t.end() );  // Insert vector t in vector s

// for(auto it : s){
//     cout<< it << " ";
// } cout<<endl ;

// cout << s.size() <<endl ;

// s.clear();

// cout << s.empty() <<endl;



////////////////////////////////////


vector <int> t1(2 , 400);
vector <int> t2(3 , 100);

t1.swap(t2);


for(auto it : t1){
    cout<< it << " ";
}  cout<<endl;

for(auto it : t2){
    cout<< it << " ";
}  cout<<endl;



};


int main(){

    exvector();

    return 0 ;
}
