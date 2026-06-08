#include <iostream>
using namespace std;

long long factHelper(long long k, long long acc) {
if (k <= 1) return acc;
    return factHelper(k - 1, acc * k);
}
long long factorial(long long n) {
    return factHelper(n, 1);
}

long long sumTo(long long n) {
    if(n == 0)return 0 ; 

    return n + sumTo(n - 1);
}


int main() {
    long long n;
    cin >> n;
    cout << "Factorial: " << factorial(n) << "\n";
    cout << "Sum: " << sumTo(n) << "\n";
return 0;
}