#include<bits/stdc++.h>
using namespace std ; 

int BtoD(string Binary){
    int ans = 0;
    int Power = 1 ; 
    int n = Binary.length() - 1;

    for(int i = n ; i >= 0 ; i--){
        if(Binary[i] == '1'){
            ans += Power ;
        }
        Power = Power * 2 ; ;
    }
    return ans ;
}

int main(){

    string Binary = "1101"; 

    int res = BtoD(Binary);

    cout<<"Decimal is : "<<res ;


    return 0;
}