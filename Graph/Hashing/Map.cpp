// Map - Map is a data structure (Map store all the vlaue in sorted order)
// Time complexity = (stroring and fetching both will take logn )

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std; 

// int main() {
//     int size; 
//     cout << "Enter the size of array: \n";
//     cin >> size;  

//     int arr[size];  
//     cout << "Enter array elements: \n";
//     for(int i = 0; i < size; i++) {
//         cin >> arr[i]; 
//     }

//     map<int, int> mpp; 
//     for(int i = 0; i < size; i++) {
//         mpp[arr[i]]++;  
//     }

//     cout<<"Map values are : ";
//     for(auto it : mpp){
//         cout<<it.first<<" , "<<it.second << endl ;
//     }

//     int q; 
//     cout << "Enter query count: ";
//     cin >> q;

//     while(q--) {
//         int number;
//         cout << "Enter number: ";
//         cin >> number;
//         cout << mpp[number] << endl; 
//     }

//     return 0;
// }

