//  Better solution 


// #include<iostream>
// using namespace std ;

// int main(){

//     int arr[10] = {1 , 2 , 0 , 0 , 2 , 2 , 1 , 0 , 2 , 0};

//     int count0 = 0 ;
//     int count1 = 0 ;
//     int count2 = 0 ;
//     for(int i = 0 ; i < 10 ; i++){
//         if(arr[i] == 0){
//             count0++;
//         }else if(arr[i] == 1){
//             count1++;
//         }else if(arr[i] == 2){
//             count2++;
//         }
//     }

//     for(int i = 0 ; i < count0 ; i++){
//         arr[i] = 0 ;
//     }
//     for(int j = count0 ; j < count0 + count1 ; j++){
//         arr[j] = 1 ; 
//     }
//     for(int k = count0 + count1 ; k < count0 + count1+count2 ; k++){
//         arr[k] = 2 ; 
//     }

//     for(int i = 0 ; i < 10 ; i++){
//         cout<<arr[i]<<" , ";
//     }

//     return 0;
// }





//////////////  Optimal Solution  ////////////////



#include<iostream>
#include<vector>
#include<algorithm>  

using namespace std;

void sortarray(vector<int>& arr, int n) {
    int low = 0; 
    int mid = 0; 
    int high = n - 1;

    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        } else if (arr[mid] == 1) {
            mid++;
        } else {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main() {
    vector<int> arr = {1, 1, 0, 1, 0, 0, 2, 2, 2, 0};
    int m = arr.size();

    sortarray(arr, m);


    for (int i : arr) {
        cout << i << " ";
    }

    return 0;
}
