// #include<iostream>
// using namespace std ; 

// int main(){

//     int size ;
//     cout<<"Enter the size of array : ";
//     cin>>size;
//     int arr[size]; 

//     cout<<"Enter the array element : ";
//     for(int i = 0 ; i < size ; i++){
//         cin>>arr[i];
//     }

//     //  1 to n , which number is not in array

//     int N ;
//     cout<<"Enter N value : ";
//     cin>>N;

//     for(int i = 1 ; i <= N ; i++){
//         int flag = 0;
//         for(int j = 0 ; j < size ; j++){
//             if(arr[j] == i){
//                 flag = 1 ;
//                 break;
//             }
//         }
//         if(flag == 0)
//         cout<<"Number which is not in array : "<<i<<endl;
//     }

//     return 0 ;
// }




//////////////  Better Solution  //////////////



// #include<iostream>
// using namespace std ; 

// int main(){

//     int size ;
//     cout<<"Enter the size of array : ";
//     cin>>size;
//     int arr[size]; 

//     cout<<"Enter the array element : ";
//     for(int i = 0 ; i < size ; i++){
//         cin>>arr[i];
//     }

//     //  1 to n , which number is not in array

//     int n ;
//     cout<<"Enter n for check which number is not in array : ";
//     cin>>n; 
//     int hash[n] = {0};
//     for(int i = 0 ; i < size; i++){
//         hash[arr[i]] = 1;
//     }

//     for(int i = 1 ; i < n ; i++){
//         if(hash[i] == 0){
//             cout<<"Number is not in array : "<<i<<endl;
//         }
//     }

//     return 0 ;
// }





/////////////////  Optimal Solution 1 ///////////////////


// #include<iostream>
// using namespace std ; 

// int main(){

//     int size ;
//     cout<<"Enter the size of array : ";
//     cin>>size;
//     int arr[size]; 

//     cout<<"Enter the array element : ";
//     for(int i = 0 ; i < size ; i++){
//         cin>>arr[i];
//     }

//     //  1 to n , which (one) number is not in array

//     int n ; 
//     cout<<"Enter number to check : ";
//     cin>>n;
//     int Rsum = (n*(n + 1))/2 ;

//     int sum = 0 ;
//     for(int i = 0 ; i < size ; i++){
//         sum = sum + arr[i];
//     }

//     cout<<"Missing number is : "<< (Rsum-sum) ;

//     return 0 ;
// }




////////////////  Optimal Solution 2 /////////////////

// XOR - (^) // 2^2 = 0 // 2^2^2^2 = 0 // 2^2^2 = 2

 






