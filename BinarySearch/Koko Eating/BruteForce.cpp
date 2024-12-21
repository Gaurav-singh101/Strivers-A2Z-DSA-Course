#include <iostream>
#include <algorithm>
#include <cmath> 
using namespace std;

int time(int arr[], int hourly, int n) {
    int totalTime = 0;

    for (int i = 0; i < n; i++) { 
        totalTime += ceil((double)arr[i] / hourly);
    }
    return totalTime;
}


int eating(int arr[], int max, int h, int n) {
    for (int i = 1; i <= max; i++) { 
        int ReqTime = time(arr, i, n);
        if (ReqTime <= h) {
            return i;
        }
    }
    return -1;
}

int main() {
    int piles[] = {3 , 6 , 7 , 11};
    int h = 8;
    int n = sizeof(piles) / sizeof(piles[0]);

    int max = *max_element(piles, piles + n);

    cout << "Number of bananas eating per hour: " << eating(piles, max, h, n) << endl;
    return 0;
}
