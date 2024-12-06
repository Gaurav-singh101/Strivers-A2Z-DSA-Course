//  Time complexity = 2nlog n
//  space complexity = n
 
 
 
 #include<bits/stdc++.h>
 using namespace std ; 

 void merge(vector<int> &arr , int low , int mid , int high){
    vector<int> temp ; 
    int left = low ; 
    int right = mid + 1 ;

    while(left <= mid && right <= high){
        if(arr[left] < arr[right]){
            temp.push_back(arr[left]);
            left++;
        }else{
            temp.push_back(arr[right]);
            right++;
        }
    } 

    while(left <= mid){
        temp.push_back(arr[left]);
        left++;
    }

    while(right <= high){
        temp.push_back(arr[right]);
        right++;
    }


    for(int i = low ; i <= high ; i++){
        arr[i] = temp[i - low];
    }
 }

int countpairs(vector<int> &arr, int low, int mid, int high) {
    int count = 0;
    int right = mid + 1;
    for (int i = low; i <= mid; i++) {
        while (right <= high && arr[i] > 2LL * arr[right]) { // Use 2LL to handle integer overflow.
            right++;
        }
        count += (right - (mid + 1));
    }
    return count;
}


int mergeSort(vector<int> &arr , int low , int high){
    int count = 0 ;
    if(low >= high) return count ; 
    int mid = (low + high) / 2 ;
    count += mergeSort(arr , low , mid);
    count += mergeSort(arr , mid + 1 , high);

     count += countpairs(arr, low , mid , high);

    merge(arr , low , mid , high);

    return count ;
 }

int ReversePair(vector<int> &arr){
    int n = arr.size();

    return mergeSort(arr , 0 , n - 1);
}

 int main(){

    vector<int> arr = {40 , 25 , 19 , 12 , 9 , 6 , 2};

    cout<<"Count is : "<<ReversePair(arr);

    return 0 ;
 }