// Hashing = Prestoring / fetching 

// #include<iostream>
// #include<limits.h>
// using namespace std;



// int main() {
//     int size;
//     int gr[100000];
//     cout << "Enter size of array: ";
//     cin >> size;
//     int arr[size];
//     cout << "Enter array elements: ";
//     for (int i = 0; i < size; i++) {
//         cin >> arr[i];
//     }


//     int max = 0;  
//     for (int i = 0; i < size; i++) {
//         if (max < arr[i]) {
//             max = arr[i];
//         }
//     }

//     int fetch[max + 1] = {0};  

//     for (int i = 0; i < size; i++) {
//         fetch[arr[i]] += 1;
//     }

//     int q;
//     cout << "How many numbers do you want to check: ";
//     cin >> q;

//     while (q--) {
//         int number;
//         cout << "Enter Number: ";
//         cin >> number;
//         cout << "It comes: " << fetch[number] << endl;
//     }

//     return 0;
// }



//////////////////////////////////////////


// #include<iostream>
// using namespace std ; 

// int main(){

//     string str ;
//     cout<<"Enter string : ";
//     cin>>str ; 

//     int hash[256] = {0};

//     for(int i = 0 ; i < str.size() ; i++){
//             hash[str[i]]++;
//     }

//     int num ;
//     cout<<"Enter nubmer to check : ";
//     cin>>num ;
//     while (num > 0){
//         cout<<"Enter char : \n";
//         char c ; 
//         cin>>c ;
//         cout<<"it comes : "<< hash[c]<<"\n";
//         num--;
//     }

//     return 0 ; 
// }