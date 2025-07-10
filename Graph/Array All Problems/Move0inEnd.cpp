
// #include<iostream>
// #include<vector>

// using namespace std;

// void MoveZero(int arr[], int n) {
//     int temp[n];

//     int j = 0 ;
//     int count = 0 ;
//     for(int i = 0 ; i < n ; i++){
//         if(arr[i] != 0){
//             temp[j] = arr[i];
//             j++;
//         }else{
//             count++;
//         }
//     }

//     for(int i = (n - count) ; i < n ; i++){
//         temp[i] = 0 ;
//     }


//     cout << "After Sift zero in last : ";
//     for (int i = 0; i < n; i++) {
//         cout << temp[i];
//         if (i < n - 1) {  
//             cout << " , ";
//         }
//     }
//     cout << endl;
// }

// int main() {
//     int n, d;
//     cout << "Enter number of elements in the array: ";
//     cin >> n;
    
//     int arr[n];
//     cout << "Enter the elements of the array: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     MoveZero(arr , n);


//     return 0;
// }




///////////////////  Optimal solution  /////////////////////




// #include<iostream>
// #include<vector>

// using namespace std;

// void MoveZero(int arr[], int n) {
//     int Z = - 1;
//     for(int k = 0 ; k < n ; k++){
//         if(arr[k] == 0){
//             Z = k ; 
//             break;
//         }
//     }
//     if(Z == -1) return;

//     for(int i = Z+1 ; i < n ; i++){
//         if(arr[i] != 0){
//         swap(arr[Z] , arr[i]);
//         Z++;
//        }
//     }
// }

// int main() {
//     int n, d;
//     cout << "Enter number of elements in the array: ";
//     cin >> n;
    
//     int arr[n];
//     cout << "Enter the elements of the array: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     MoveZero(arr , n);

//     cout << "After Sift zero in last : ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i];
//         if (i < n - 1) {  
//             cout << " , ";
//         }
//     }
//     cout << endl;


//     return 0;
// }
