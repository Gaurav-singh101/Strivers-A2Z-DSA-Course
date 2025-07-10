/////////////////   brute force solution  ///////////


// #include<bits/stdc++.h>
// using namespace std ;

// int main(){

//     int arr[6] = {3 , 1 , -2 , -5 , 2 , -4};

//     int positive[3] ;
//     int j = 0 ;
//     int negative[3] ;
//     int k = 0 ;

//     for(int i = 0 ; i < 6 ; i++){
//         if(arr[i] > 0){
//         positive[j] = arr[i];
//         j++;
//         }else if(arr[i] < 0){
//         negative[k] = arr[i];
//         k++;
//         }
//     }

//     int m = 0 ; 
//     int n = 0 ;
//     for(int i = 0 ; i < 6 ; i++){

//          if(i % 2 == 0){
//             arr[i] = positive[m];
//             m++;
//         }else{
//             arr[i] = negative[n];
//             n++;
//         }
//     }

// for(int i = 0 ; i < 6 ; i++){
//     cout<<arr[i]<<" , ";
// }
//     return 0 ;
// }






//////////////////   optimal solution  /////////////


// #include<bits/stdc++.h>
// using namespace std ;

// vector<int> rearrange(vector<int> nums){
//     int n = nums.size();
//     vector<int>result(n , 0);  
//     int positive = 0 ; 
//     int negative = 1 ;
//     for(int i = 0 ; i < n ; i++){
//         if(nums[i] < 0){
//             result[negative] = nums[i];
//             negative += 2;
//         }else{
//             result[positive] = nums[i];
//             positive += 2;
//         }
//     }
//     return result ;
// }

// int main(){

//     vector<int> arr = {3 , 1 , -2 , -5 , 2 , -4};


//     for(auto it : rearrange(arr)){
//         cout<<it<<" , ";
//     }


//     return 0 ;
// }




/////////////////////////////////////


#include<bits/stdc++.h>
using namespace std ;

vector<int> alternateNumbers(vector<int>&a) {
    int n = a.size();
    vector <int> pos , neg ;
    for(int i = 0 ; i < n ; i++){
        if(a[i] > 0){
            pos.push_back(a[i]);
        }else{
            neg.push_back(a[i]);
        }
    }

    int x = pos.size();
    int y = neg.size();

    if(x > y){

        for(int i = 0 ; i < y ; i++){
            a[2*i] = pos[i];
            a[2*i + 1] = neg[i];
        }
        int index = y * 2 ;
        for(int i = y ; i < x ; i++){
            a[index] = pos[i];
            index++;
        }

    }else{

        for(int i = 0 ; i < x ; i++){
            a[2*i] = pos[i];
            a[2*i + 1] = neg[i];
        }
        int index = x * 2;
        for(int i = x ; i < y ; i++){
            a[index] = neg[i];
            index++;
        }
    }
        return a ;
}

int main(){

    vector<int> arr = {3 , 1 , -2 , -5 , 2 , -4 , 5 ,7 ,8};

    for(auto it : alternateNumbers(arr)){
        cout<<it<<" , ";
    }

    return 0 ;
}