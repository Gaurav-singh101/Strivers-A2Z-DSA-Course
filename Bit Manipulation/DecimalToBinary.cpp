#include<bits/stdc++.h>
using namespace std ; 

string DtoB(int Decimal){
    string  ans = "";
    stack<string> st ;
    while(Decimal != 1){
        if(Decimal % 2 == 1){
            st.push("1");
        }else{
            st.push("0") ;
        }
        Decimal = Decimal / 2 ;
    }
    st.push("1");

    while(!st.empty()){
        ans += st.top();
        st.pop();
    }
    return ans ;
}

int main(){

    int Decimal = 19 ; 

    string res = DtoB(Decimal);

    cout<<"Binary is : "<<res ;


    return 0;
}