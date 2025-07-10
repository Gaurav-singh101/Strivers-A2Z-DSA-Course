#include<bits/stdc++.h>
using namespace std ;

void ex(){
    pair<int , int> p = {1 , 3};
    cout<<p.first<<" , "<<p.second<<endl;

    pair<int , pair<int , int>> s = {3 , {4 ,5}};
    cout<<s.first<<" , "<<s.second.second<<" , "<<s.second.first<<endl;

    pair<int , int> arr[5] = {{1,2} , {2,3} , {3,4} , {4,5} , {5,6}};
    cout<<arr[1].second <<endl ; 
    cout<<arr[1].first <<" , "<<arr[1].second; 

}

int main(){
   ex();
 
    return 0 ;
}