// 76. Minimum Window Substring

// Given two strings s and t of lengths m and n respectively, return the minimum window substring of s such that every character in t (including duplicates) is included in the window. If there is no such substring, return the empty string "".

// The testcases will be generated such that the answer is unique.

 

// Example 1:

// Input: s = "ADOBECODEBANC", t = "ABC"
// Output: "BANC"
// Explanation: The minimum window substring "BANC" includes 'A', 'B', and 'C' from string t.




#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.length();
        int m = t.length();
        int minLength = INT_MAX; 
        int SInd = -1;

        for (int i = 0; i <= n - m; i++) {
            int hash[256] = {0}; 
            for (int j = 0; j < m; j++) {
                hash[t[j]]++;
            }

            int cnt = 0;
            for (int j = i; j < n; j++) {
                if (hash[s[j]] > 0) {
                    cnt++;
                }
                hash[s[j]]--;

                if (cnt == m) {
                    if (j - i + 1 < minLength) {
                        minLength = j - i + 1; 
                        SInd = i;
                    }
                    break;
                }
            }
        }

        if (SInd == -1) return "";
        return s.substr(SInd, minLength);
    }
};

int main() {
    string s = "ADOBECODEBANC";
    string t = "ABC";

    Solution obj;
    string result = obj.minWindow(s, t);
    cout << result << endl;

    return 0;
}
