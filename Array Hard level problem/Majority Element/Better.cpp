// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std ;

// list<int> Majority(int arr[] , int n){
//     list <int> ls;
//     int mm = (n / 3) + 1 ;
//     map<int, int> map;

//     for(int i = 0 ; i < n ; i++){
//         map[arr[i]]++;
//         if(map[arr[i]] == mm){
//             ls.push_back(arr[i]);
//         }
//     }
//     return ls ;
// }

// int main(){

//     int n ;
//     cout<<"Enter the array size : ";
//     cin >> n;
//     int arr[n] ;
//     cout<<"Enter array element : ";
//     for(int i = 0 ; i < n ; i ++){
//         cin>>arr[i];
//     }

//     list<int> Result = Majority(arr , n);

//     for(auto it : Result){
//         cout<<it<<" , ";
//     }
//     return 0 ;
// }