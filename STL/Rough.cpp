// Given a number n. Count the number of digits in n which 
// evenly divide n. Return an integer, total number of digits 
// of n which divides n evenly.

// Input: n = 2446
// Output: 1
// Explanation: Here among 2, 4, 6 only 2 divides 2446 evenly
//  while 4 and 6 do not.

// #include<iostream>

// using namespace std ; 

// int main (){

//     int num ; 
//     cout << "Enter a number : ";
//     cin >> num ;

//     int count = 0 ;

//     int x = num ;

//     while(num > 0){
//         int m = num % 10 ;
//         if(x % m == 0){
//             count++ ;
//         }
//         num = num / 10 ;
//     }
//     cout << count ;


//     return 0 ;
// }




/////////////////////////////////////////////////


// Reverse Integer
// Example 1:

// Input: x = 123
// Output: 321
// Example 2:

// Input: x = 120
// Output: 21

// #include<iostream>
// using namespace std ; 

// int main(){

//     int num ;
//     cout<<"Enter a nubmer :" ;
//     cin >> num ;

//     int  newnum = 0 ; 

//     while (num > 0){
//         int m = num % 10 ;
//         num = num / 10 ;
//         newnum = (newnum * 10 ) + m ; 
//     }

//     cout << newnum ;



//   return 0;
// }



//////////////////////////////////////////////////////////////////////

// Armstrong Numbers


// #include <bits/stdc++.h>
// using namespace std;

// int main(){
    
//     int num ; 
//     cout<<" Enter a nubmer : ";
//     cin >> num ;
//     int x = num ;
//     int sum = 0 ;

    
//     while(num > 0){
//         int m = num % 10 ;
//         sum =  (m*m*m);
//         num = num / 10 ;
//     }
    
//     if(sum == x){
//         cout<<"Armstrong Numbers";
//     }
//     else{
//         cout<<"Not";
//     }
    
//     return 0 ;
// }



/////////////////////////////////////////////////////////////////////////////////////

// to print all divisors 

// #include<bits/stdc++.h>

// using namespace std ; 

// void  printDiviser(int x){

//     vector <int> ls ;
//     for(int i =1 ; i <= sqrt(x) ; i++){
//         if(x % i == 0){
//             ls.push_back(i);
//         }
//         if((x / i) != i){
//             ls.push_back(x / i);
//         }
//     }

//     sort(ls.begin() , ls.end());
    
//     for(auto it : ls)
//     cout << it <<endl;

// };

// int main(){

//     printDiviser(36);

    
//     return 0;
// }



////////////////////////////////////////////////////////

// Prime Number 


// #include<bits/stdc++.h>

// using namespace std ; 

// void prime_Num(int x){

//     int count = 0 ;

//     for(int i = 1 ; i*i <= x ; i++){
//         if(x % i == 0){
//             count++ ;

//             if((x / i) != i){
//             count++;
//         }
//         }
//     }

//     if(count == 2 ){
//         cout<<"Prime number ";
//     }else{
//         cout<<"Not a prime number";
//     }

// };

// int main(){

//     int num ; 
//     cout<<"Enter a number : ";
//     cin>>num ;

//     prime_Num(num);

//     return 0 ;
// }


///////////////////////////////////////////////////

// GCD  = Gretest common diviser

// #include<bits/stdc++.h>
// using namespace std ; 

// void GCD(int x , int y){


//     for(int i = min(x , y) ; i  >= 1 ; i--){

//         if(x % i == 0 && y % i == 0){
//                 cout << "Gretest common divisor  : " << i ;
//                 break;
//         }
//     }
// };
// int main(){

//     int x ,y ; 
//     cout <<"Enter 1st and 2nd number : ";
//     cin>> x >> y ;

//     GCD(x , y);
//     return 0 ;
// }


///////////////////////////////////////////////////

// LCM  

#include<bits/stdc++.h>
using namespace std ; 

void GCD(int x , int y){

        int g  = 1;
    for( int i = min(x , y) ; i  >= 1 ; i--){
        if(x % i == 0 && y % i == 0){
                g = i;
        }
    }
                int LCM  = (x * y) / g ;
                cout << "LCM : " << LCM ;
};
int main(){

    int x ,y ; 
    cout <<"Enter 1st and 2nd number : ";
    cin>> x >> y ;

    GCD(x , y);
    return 0 ;
}