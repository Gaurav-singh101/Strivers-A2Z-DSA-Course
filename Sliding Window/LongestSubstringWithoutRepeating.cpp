// 3. Longest Substring Without Repeating Characters

// Given a string s, find the length of the longest substring without duplicate characters.


// Example 1:

// Input: s = "abcabcbb"
// Output: 3
// Explanation: The answer is "abc", with the length of 3.




////////////////  Brute Force ////////////////


// #include<bits/stdc++.h>
// using namespace std ; 

// class solution{
//     public:

//     int substring(string &s){
//         int maxLen = INT_MIN ; 
//         int n = s.length();

//         for(int i = 0 ; i < n ; i++){
//             int hash[255] = {0};
//             int len = 0; 
//             for(int j = i ; j < n ; j++){
//                 if(hash[s[j]] == 1){
//                     len = 0 ; 
//                     break;
//                 };
//                 len = j - i + 1 ;
//                 maxLen = max(maxLen , len);
//                 hash[s[j]] = 1 ;
//             }
//         }
//         return maxLen ;
//     }
// };


// int main(){

//     string s = "abcabcbb" ; 

//     solution obj ; 

//     cout<<"Longest Substring without Repeating : "<<obj.substring(s);


//     return 0 ;
// }



///////////////  Optimal Solution ////////////


#include<bits/stdc++.h>
using namespace std ; 

class solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length(); 
        int maxlen = 0; 
        int l = 0, r = 0; 
        int hash[256]; 
        fill(hash, hash + 256, -1); 

        while (r < n) {
            if (hash[s[r]] != -1 && hash[s[r]] >= l) {
                l = hash[s[r]] + 1;
            }

            hash[s[r]] = r;
            maxlen = max(maxlen, r - l + 1); 
            r++;
        }

        return maxlen;
    }
};


int main(){

    string s = "abcabcbb" ; 

    solution obj ; 

    cout<<"Longest Substring without Repeating : "<<obj.lengthOfLongestSubstring(s);


    return 0 ;
}