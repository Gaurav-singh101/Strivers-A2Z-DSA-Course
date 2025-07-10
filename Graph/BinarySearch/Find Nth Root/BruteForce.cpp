// Find the nth root of M .

#include <bits/stdc++.h>
using namespace std;

int f(int i, int n) {
    int ans = 1;

    for (int j = 1; j <= n; j++) { 
        ans *= i; 
    }
    return ans;
}

int main() {
    int m = 28;
    int n = 3; 

    bool found = false;

    for (int i = 1; i < m; i++) {
        if (f(i, n) == m) { 
            cout << "Root is: " << i << endl;
            found = true;
            break; 
        } else if (f(i, n) > m) {
            break; 
        }
    }

    if (!found) {
        cout << "No integer root found!" << endl;
    }

    return 0;
}
