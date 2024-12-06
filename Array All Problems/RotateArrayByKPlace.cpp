//////////////////////// Left rotate by one place /////////////////////

// #include<iostream>
// using namespace std;

// void leftRotate(int arr[] , int x){
//     int temp = arr[0];

//     for(int i = 1 ; i < x; i++){
//         arr[i - 1] = arr[i];
//     }
//     arr[x-1] = temp ;

// }

// int main(){

//     int n ;
//     cout<<"Enter number of element in array : ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the number of element in array : ";
//     for(int i = 0 ; i < n ; i++){
//         cin>>arr[i];
//     }

//     leftRotate(arr , n);

//     cout<<"After rotaion : "<<endl;

//     for(int i = 0 ; i < n ; i++){
//         cout<<arr[i];
//         while(i != (n-1)){
//             cout<<" , ";
//             break;
//         }
//     }

//     return 0 ;
// }




////////////////////////// Right rotate by one place ///////////////////////////


// #include<iostream>
// using namespace std;

// void RightRotate(int arr[] , int x){
//     int temp = arr[x-1];

//     for(int i = x - 1 ; i > 0 ; i--){
//         arr[i] = arr[i - 1];
//     }
//     arr[0] = temp ;

// }

// int main(){

//     int n ;
//     cout<<"Enter number of element in array : ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the number of element in array : ";
//     for(int i = 0 ; i < n ; i++){
//         cin>>arr[i];
//     }

//     RightRotate(arr , n);

//     cout<<"After rotaion : "<<endl;

//     for(int i = 0 ; i < n ; i++){
//         cout<<arr[i];
//         while(i != (n-1)){
//             cout<<" , ";
//             break;
//         }
//     }

//     return 0 ;
// }



///////////////////////// Left  rotate by D place   /////////////////////////




// #include<iostream>
// using namespace std;

// void Rotate(int arr[] , int x , int d){
//     int temp[d] ;

//     for(int i = 0 ; i < d ; i++){
//         temp[i] = arr[i];
//     }

//     for(int i = d ; i < x ; i++){
//         arr[i-d] = arr[i];
//     }

//     for(int i = d - 1 ; i < x ; i++){
//         arr[i] = temp[i - 2];
//     }


// }

// int main(){

//     int n , d;
//     cout<<"Enter number of element in array : ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the number of element in array : ";
//     for(int i = 0 ; i < n ; i++){
//         cin>>arr[i];
//     }

//     cout<<"Enter how many rotatation want : "<<endl;
//     cin>>d;

//     Rotate(arr , n , d);

//     cout<<"After rotaion : "<<endl;

//     for(int i = 0 ; i < n ; i++){
//         cout<<arr[i];
//         while(i != (n-1)){
//             cout<<" , ";
//             break;
//         }
//     }

//     return 0 ;
// }



//////////////////////  Best method to rotate array //////////////////


#include<iostream>
using namespace std;

void reverse(int arr[], int start, int end) {
    while (start < end) {  // Fix the condition to avoid unnecessary swaps
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void Rotate(int arr[], int n, int d) {
    d = d % n;  // Handle rotations larger than array size
    reverse(arr, 0, d - 1);
    reverse(arr, d, n - 1);
    reverse(arr, 0, n - 1);
}

int main() {
    int n, d;
    cout << "Enter number of elements in the array: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the number of rotations: ";
    cin >> d;

    Rotate(arr, n, d);

    cout << "After rotation: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i < n - 1) {  // Correct comma placement
            cout << " , ";
        }
    }
    cout << endl;

    return 0;
}
