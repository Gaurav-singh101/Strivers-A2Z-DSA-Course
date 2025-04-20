#include<bits/stdc++.h>
using namespace std ;

struct Job{
    int jod_id ; 
    int due_date ; 
    int profit ;
};

bool comp(Job val1 , Job val2){
    return val1.profit > val2.profit ;
}

vector<int> fun(vector<Job> &arr){
    sort(arr.begin() , arr.end() , comp);

    int totProfit = 0 , cnt = 0 , maxDeadline = -1 ;

    for(int i = 0 ;  i < arr.size() ; i++){
        maxDeadline = max(maxDeadline , arr[i].due_date);
    }
    vector<int> hash(maxDeadline + 1, -1);

    for(int i = 0 ; i < arr.size() ; i++){
        for(int j = arr[i].due_date ; j > 0 ; j--){
            if(hash[j] == -1){
                cnt++;
                hash[j] = arr[i].jod_id;
                totProfit += arr[i].profit ;
                break;
            }
        }
    }
    return  {cnt , totProfit} ;
}



int main(){

    vector<Job> arr = {{1, 4, 20} , {2, 1, 10} , {3, 1, 40} , {4, 1, 30}} ;

    vector<int> ans = fun(arr);

    cout<<"Number of jobs done is : "<<ans[0]<<"  and profit is "<<ans[1];

    return 0;
}

