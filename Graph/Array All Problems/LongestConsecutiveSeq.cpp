/////////////////    brute force solution  ////////////

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std ;

// bool ls(vector <int>arr , int num){
//     for(int i = 0 ; i < sizeof(arr) ; i++){
//         if(arr[i] == num){
//             return true ;
//         }
//     }
//     return false ;
// }

// int consucative( vector <int> arr){
//     int n = arr.size();

//     int largest = 1 ;

//     for(int i = 0 ; i < n ; i++){
//         int num = arr[i];
//         int count = 1 ;
//         while(ls(arr , num + 1) == true){
//             num = num  + 1;
//             count = count + 1; 
//             largest = max(largest , count);
//         }
//         }
//             return largest;
// }

// int main(){

// vector <int> arr={102, 4 , 100 , 1 , 101 , 3 , 2 , 1 , 1};
// cout<<"Largest consecutive sequence : "<<consucative(arr);

//     return 0 ;
// }


/////////////////    better solution   /////////////// 


// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std ;

// int consucative( vector <int> arr){
//     int n = arr.size();
//     int largest = 1 ;
//     sort(arr.begin() , arr.end());
//     int count = 0 ;
//     int last_Smaller = INT_MIN ;

//     for(int i = 0 ; i < n ; i++){
//         if(arr[i] - 1 == last_Smaller){
//             count += 1 ; 
//             last_Smaller = arr[i];
//         }else if(last_Smaller != arr[i]){
//             count = 1 ;
//             last_Smaller = arr[i];
//         }
//         largest = max(largest , count);
//     }
//     return largest ;
// }

// int main(){

// vector <int> arr={102, 4 , 100 , 1 , 101 , 3 , 2 , 1 , 1};  

// cout<<"Largest consecutive sequence : "<<consucative(arr);

//     return 0 ;
// }








