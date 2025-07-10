#include<bits/stdc++.h>
using namespace std ;

bool fun(string &s , int ind , int count , int n){
    if(count < 0)return false ;
    if(ind == n)return (count == 0) ;

    if(s[ind] == '('){
        return fun(s , ind + 1 , count + 1 , n);
    }

    if(s[ind] == ')'){
        return fun(s , ind + 1 , count - 1 , n);
    }

    return fun(s , ind + 1 , count + 1 , n) || fun(s , ind + 1 , count - 1 , n) || fun(s , ind + 1 , count , n) ;
}


bool checkValidString(string &s) {
    int n = s.length();
    int count = 0 ;
    int ind = 0 ;

    return fun(s , ind , count , n);
 
}

int main(){

    string s = "((*()";

    int ans = checkValidString(s);

    if(ans == 1){
        cout<<"True" ;
    }else{
        cout<<"False" ;
    }

    return 0 ;
}