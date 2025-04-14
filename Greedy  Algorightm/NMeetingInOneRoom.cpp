#include<bits/stdc++.h>
using namespace std ;

struct Data{
    int start ; 
    int end ; 
    int pos ;
};

bool comp(Data val1, Data val2){
    return val1.end < val2.end ;
};

int MeetingDone(vector<int> &start , vector<int> &end){
    int n = start.size();
    Data arr[n] ;

    for(int i = 0 ; i < n ; i++){
        arr[i].start = start[i];
        arr[i].end = end[i];
        arr[i].pos = i + 1 ;
    }

    sort(arr , arr + n , comp);

    int count = 1 ; 
    vector<int> Meetings ; 
    Meetings.push_back(arr[0].pos);
    int freetime = arr[0].end ;

    for(int i = 1 ; i < n ; i++){
        if(arr[i].start > freetime){
            count++ ; 
            freetime = arr[i].end ;
            Meetings.push_back(arr[i].pos);
        }
    }
    return count ;
}

int main(){

    vector<int> start = {1, 3, 0, 5, 8, 5};
    vector<int> end = {2, 4, 6, 7, 9, 9};

    int ans = MeetingDone(start , end);

    cout<<ans ;

    return 0 ;
}
