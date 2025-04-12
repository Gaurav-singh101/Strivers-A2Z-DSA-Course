#include<bits/stdc++.h>
using namespace std;

bool fun(string &s , int ind , int count , int n , vector<vector<int>> &dp){
    if(count < 0) return false;
    if(ind == n) return (count == 0);

    if(dp[ind][count] != -1) return dp[ind][count];

    if(s[ind] == '('){
        return dp[ind][count] = fun(s , ind + 1 , count + 1 , n , dp);
    }

    if(s[ind] == ')'){
        return dp[ind][count] = fun(s , ind + 1 , count - 1 , n , dp);
    }


    return dp[ind][count] = fun(s , ind + 1 , count + 1 , n , dp) || 
                            fun(s , ind + 1 , count - 1 , n , dp) || 
                            fun(s , ind + 1 , count , n , dp);
}

bool checkValidString(string &s) {
    int n = s.length();
    vector<vector<int>> dp(n, vector<int>(n + 1, -1));
    return fun(s, 0, 0, n, dp);
}

int main(){
    string s = "((*()";
    bool ans = checkValidString(s);

    cout << (ans ? "True" : "False") << endl;
    return 0;
}
