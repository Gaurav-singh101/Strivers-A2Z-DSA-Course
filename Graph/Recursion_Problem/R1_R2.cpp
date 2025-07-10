// //  Print from n to 1 


// #include<bits/stdc++.h>
// using namespace std ; 

// void num(int n ){
//     if(n == 0)return ;
//     cout<<n<<" , ";
//     return num(n - 1);
// }

// int main(){
//     int n ; 
//     cout<<"Enter nubmer : ";
//     cin>>n;
//     num(n);
// return 0 ;
// }


///////////////////////////////////////////////////////////

// print from 1 to N


// #include<bits/stdc++.h>
// using namespace std ; 

// void printnum(int x , int k = 1){

//     if(k > x) return ;
//     cout << k << " , ";
//     printnum(x , k + 1);

// };

// int main(){

//     int a ; 
//     cout<<"Enter a number : ";
//     cin>>a;
//     printnum(a);
//     return 0 ;
// }


/////////////////////////////////////////////////

// Print name up to N time 


// #include<bits/stdc++.h>
// using namespace std ; 

// void printnum(int x , int k){

//     if(k > x) return ;
//     cout << "Gaurav Singh" << endl ;
//     printnum(x , k + 1);

// };

// int main(){

//     int a ; 
//     cout<<"Enter a number : ";
//     cin>>a;
//     printnum(a , 1);
//     return 0 ;
// }


//////////////////////////////////////////////////


//  Print from 1 to n  using backtravel

// #include<bits/stdc++.h>
// using namespace std ; 

// void printnum(int x){

//     if(x < 1) return ;

//     printnum(x - 1);

//     cout << x << " , ";

// };

// int main(){
//     int a ; 
//     cout<<"Enter a number : ";
//     cin>>a;
//     printnum(a);
//     return 0 ;
// }


//////////////////////////////////////////////

// Print N to 1 using back travel

// #include<bits/stdc++.h>
// using namespace std ; 

// void printnum(int x , int k = 1){

//     if(k > x) return ;

//     printnum(x , k + 1);

//     cout << k << " , ";

// };

// int main(){
//     int a ; 
//     cout<<"Enter a number : ";
//     cin>>a;
//     printnum(a);
//     return 0 ;
// }


//////////////////////////////////////////////

// #include<bits/stdc++.h>
// using namespace std ;

// long long factorialNumber(int n){

//        if (n == 0 || n == 1) {
//           return 1; // factorial of 0 and 1 is 1
//         }
 
//       return n * factorialNumber(n - 1);

//     };

// int main(){

// long long result = factorialNumber(4);

// cout << result ;

//     return 0 ;
// }



