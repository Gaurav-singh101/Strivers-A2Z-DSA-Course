#include<bits/stdc++.h>
using namespace std ; 

int f(vector<int> &arr , int x){
    int ans = -1 ;
    int n = arr.size();
    int low = 0 ; int high = n - 1 ;

    while(low <= high){
        int mid = (low + high) / 2 ;
        if(arr[mid] == x){
            ans = mid , high = mid - 1;
        }else if(arr[mid] < x){
            low = mid + 1 ;
        }else{
            high = mid - 1 ;
        }
    }
    return ans ;
}

int l(vector<int> &arr , int x){
    int ans = -1;
    int n = arr.size();
    int low = 0 , high = n - 1 ;

    while(low <= high){
        int mid = (low + high) / 2;
        if(arr[mid] == x){
            ans = mid ; 
            low = mid + 1 ;
        }else if(arr[mid] < x){
            low = mid + 1 ;
        }else{
            high = mid - 1 ;
        }
    }
    return ans ;
}

vector<int> firstlast(vector<int> &arr , int x){
    int first = f(arr , x);
    if(first == -1) return {-1 , -1};
    int last  = l(arr , x);

    return {first , last};
}

int main(){

    vector<int> arr = {2 , 8 , 8 , 8 , 8 , 8 , 11 , 13};

    int x = 8 ;
    vector<int> result = firstlast(arr , x);

    cout<<"First and last occurrence : ";
    for(int i : result){
        cout<<i<<" , ";
    }

    return 0 ;
}