

 #include<bits/stdc++.h>
using namespace std ;

int fun(int mid , int n , int m){
    int ans = 1 ;
    for(int i = 1 ; i <= n ; i++){
        ans = ans*mid ;
        if(ans > m) return 2 ;
    }
    if(ans == m) return 1 ;
    return 0;
}


int NthRoot(int m , int n){

    int low = 1 ; int high = m ;

    while(low <= high){
        int mid = (low + high) / 2 ;

        if(fun(mid , n , m) == 1) return mid ;
        else if(fun(mid , n , m) < 0){
            low = mid + 1 ;
        }else{
            high = mid - 1;
        }
    }
    return -1 ;
}

int main(){

    int m = 256 ;
    int n = 4 ;

    cout<<"The nth root is : "<<NthRoot(m , n);

    return 0 ;
}