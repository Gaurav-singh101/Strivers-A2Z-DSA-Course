// #include<iostream>
// #include<algorithm> 
// using namespace std; 

// int MaxCon(int arr[], int n) {
//     int maxi = 0; 
//     int cnt = 0; 

//     for(int i = 0; i < n; i++) {
//         if(arr[i] == 1) {
//             cnt++;
//             maxi = max(maxi, cnt); 
//         } else {
//             cnt = 0; 
//         }
//     }
//     return maxi;
// }

// int main() {
//     int arr[10] = {1,1,0,0,1,1,1,1,9,10}; 
//     int n =  sizeof(arr);
//     cout << "Maximum consecutive ones is: " << MaxCon(arr, n);
//     return 0;
// }




/////////  Find the number that appears once , and the other twice   ///////////


// #include<iostream>
// using namespace std ;

// int main(){

//     int arr[10] = {1, 1, 2, 9, 3, 9, 4, 5, 5, 4};

//     int data;
//     int count = 0;

//     int arr_size = sizeof(arr) / sizeof(arr[0]);

//     for(int i = 0; i < arr_size; i++) {
//         data = arr[i];
//         count = 0; 
//         for(int j = 0; j < arr_size; j++) {
//             if(arr[j] == data) {
//                 count++;
//             }
//         }
//         if(count == 1) {
//             cout << "The number is: " << data << endl;
//         }
//     }

//     return 0;
// }



/////////////////  Better solution  //////////////


// #include<iostream>
// using namespace std ; 

// void Number(int arr[] , int size){

//     int MaxNum = 0 ;
//     for(int i = 0 ; i < size ; i++){
//         if(MaxNum < arr[i]){
//             MaxNum = arr[i];
//         }
//     }

//     int hash[MaxNum + 1] = {0};
//     for(int i = 0 ; i < size ; i++){
//         hash[arr[i]]++;
//     }

//     for(int i = 0 ; i <= MaxNum ; i++){
//         if(hash[i] == 1){
//             cout<<"The number is: "<<i<<endl;
//         }
//     }
// }

// int main(){

//     int arr[10] = {5, 1, 2, 9, 3, 9, 4, 5, 5, 4};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     Number(arr , size);
//     return 0 ;
// }

///////////////    One more solution   //////////////////////////// 


// #include<iostream>
// #include<unordered_map>
// using namespace std ; 

// void Number(int arr[], int size) {
//     unordered_map<int, int> freq;

 
//     for (int i = 0; i < size; i++) {
//         freq[arr[i]]++;
//     }


//     for (auto it : freq) {
//         if (it.second == 1) {
//             cout << "The number that appears once is: " << it.first << endl;
//         }
//     }
// }

// int main() {
//     int arr[10] = {5, 1, 2, 9, 3, 9, 4, 5, 5, 4};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     Number(arr, size);
//     return 0 ;
// }


/////////////    Optimal solution (Using Xor)     ////////////



// #include<iostream>
// using namespace std ; 

// void Number(int arr[] , int size){
//     int xorr = 0 ;
//     for(int i = 0 ; i < size ; i++){
//         xorr = xorr ^ arr[i];
//     }
//         cout<<"The number is : "<<xorr;
// }

// int main(){

//     int arr[10] = {5, 1, 2, 9, 3, 9, 4, 5, 5, 4};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     Number(arr , size);
//     return 0 ;
// }








