#include <iostream>
using namespace std;

int main() {
    int n = 4;

    for (int i = 1; i <= n; ++i) {

        for (int j = 1; j <= n - i; ++j) {
            cout << " ";
        }
 
        for (int k = 1; k <= i; ++k) {
            cout << "* ";
        }
        cout << endl;
    }

    for (int i = 1; i <= n; ++i) {

        for (int k = 1; k <= i; k++) {
            cout <<" ";
        }

        for (int j = 1; j <= n - i; ++j) {
            cout <<"* ";
        }

        cout << endl;
    }

    return 0;
}
