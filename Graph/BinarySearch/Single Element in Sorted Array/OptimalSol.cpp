 #include<bits/stdc++.h>
using namespace std ; 

int searchElement(vector<int> arr){
    int n = arr.size();

    if(n == 1) return arr[0] ; // if there is only one element 
    if(arr[0] != arr[1]) return arr[0]; // for first element 
    if(arr[n -1] != arr[n -2]) return arr[n -1];  // for last element
    int low = 1 , high = n - 2 ;

    while(low <= high){
        int mid = (low + high) / 2;

        if(arr[mid] != arr[mid + 1] && arr[mid] != arr[mid -1]) return arr[mid];

        // for left half 
        if((mid % 2 == 1 && arr[mid] == arr[mid - 1]) || (mid % 2 == 0 && arr[mid] == arr[mid + 1])){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    return -1 ;
}

int main(){

    vector<int> arr = {2 , 2 , 3 , 3 , 4 , 5 , 5 , 6 , 6 , 7 , 7};

    cout<<"Single element is : "<<searchElement(arr);


    return 0;
}