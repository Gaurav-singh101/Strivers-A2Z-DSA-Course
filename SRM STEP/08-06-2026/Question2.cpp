#include <iostream>
using namespace std;

long long fib(long long n) {
    if (n <= 1) return n;
    return fib(n - 1) + fib(n - 2);
}

long long callCount(long long n) {
    if(n <= 1)return 1 ; 
    return 1 + callCount(n - 1) + callCount(n - 2);
}
int main() {
    long long n;
    cin >> n;
    cout << "Fibonacci: " << fib(n) << "\n";
    cout << "Recursion Tree Nodes: " << callCount(n) << "\n";
    return 0;
}