// #include<bits/stdc++.h>
// using namespace std ; 

// int fibo(int n){
//     if(n <= 1){
//         return n ;
//     }

//     return fibo(n - 1) + fibo(n - 2);
// }

// int main(){

//     int n = 6 ;
//     cout<<"Fibo of "<<n<<" is : "<<fibo(n);


//     return 0 ;
// }


///////////////////    Mamoization form  //////////////////

// #include<bits/stdc++.h>
// using namespace std ; 

// int fibo(int n , vector<int> &dp){
//     if(n <= 1){
//         return n ;
//     }

//     if(dp[n] != -1) return dp[n];

//     return dp[n] =  fibo(n - 1 , dp) + fibo(n - 2 , dp);
// }

// int main(){

//     int n = 6 ;

//     vector<int> dp(n + 1 , -1);

//     cout<<"Fibo of "<<n<<" is : "<<fibo(n , dp);
//     return 0 ;
// }



////////////////////////////  Tabulation form  //////////




#include<bits/stdc++.h>
using namespace std ; 


int main(){

    int n = 6 ;

    int prev2 = 0 ; 
    int prev1 = 1 ;

    for(int i = 2 ; i <=n ; i++){
        int curi = prev1 + prev2 ; 
        prev2 = prev1 ;
        prev1 = curi ;
    }

    cout<<"Fibo of the number is "<<prev1 ; 

    return 0 ;
}

