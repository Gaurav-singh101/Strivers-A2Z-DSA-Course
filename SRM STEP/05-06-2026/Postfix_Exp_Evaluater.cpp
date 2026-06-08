#include<bits/stdc++.h>
using namespace std ; 

vector<int> posfix_Exp_Evaluator(vector<char>& exp){
    stack<int>st ;
    int depth = 0 ; 

    for(int i = 0 ; i < exp.size(); i++){
        char x = exp[i];
        bool flag = isdigit(int(x));

        if(flag == true){
            st.push(x - '0');
        }else{
            int op1 = st.top() ; st.pop();
            int op2 = st.top() ; st.pop();

            if(x == '+')
                st.push(op2 + op1);
            else if(x == '-')
                st.push(op2 - op1);
            else if(x == '*')
                st.push(op2 * op1);
            else if(x == '/')
                st.push(op2 / op1);
        }

        int a = st.size();
        depth = max(depth , a);
        flag = false ;
    }

    return {st.top() , depth};
}


int main(){

    vector<char>exp = {'5' , '1' , '2' , '+' , '4' , '*' , '+' , '3' ,  '-'};
    vector<int>res = posfix_Exp_Evaluator(exp);
    cout<<"Result: "<<res[0]<<"\n";
    cout<<"Max Stack Depth: "<<res[1] ;

    return 0 ;
}
