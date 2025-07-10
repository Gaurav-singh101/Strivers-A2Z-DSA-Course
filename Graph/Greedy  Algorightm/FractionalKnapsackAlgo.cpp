// #include <bits/stdc++.h>
// using namespace std;

// struct item {
//     int price;
//     int weight;
// };

// bool comp(item &val1, item &val2) {
//     double r1 = (double)val1.price / val1.weight;
//     double r2 = (double)val2.price / val2.weight;
//     return r1 > r2; 
// }

// double Knapsack(vector<item> &arr, int n, int w) {
//     sort(arr.begin(), arr.end(), comp);

//     double totalVal = 0;

//     for (int i = 0; i < n; i++) {
//         if (arr[i].weight <= w) {
//             totalVal += arr[i].price;
//             w -= arr[i].weight;
//         } else {
//             totalVal += ((double)arr[i].price / arr[i].weight) * w;
//             break;
//         }
//     }

//     return totalVal;
// }

// int main() {
//     int n;
//     cout << "Enter the number of items: ";
//     cin >> n;

//     vector<item> arr(n);
//     cout << "Enter the price and weight of each item:\n";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i].price >> arr[i].weight;
//     }

//     int w;
//     cout << "Enter the knapsack capacity: ";
//     cin >> w;

//     double totalVal = Knapsack(arr, n, w);

//     cout << fixed << setprecision(2);
//     cout << "Total value is: " << totalVal << endl;

//     return 0;
// }





////////////////////////////////////////////




#include <bits/stdc++.h>
using namespace std;

struct item {
    int price;
    int weight;
};


bool comp(item &a, item &b) {
    double r1 = (double)a.price / a.weight;
    double r2 = (double)b.price / b.weight;
    return r1 > r2;
}

double Knapsack(vector<int> &price, vector<int> &weight, int w) {
    int n = price.size();
    vector<item> items(n);

    for (int i = 0; i < n; i++) {
        items[i].price = price[i];
        items[i].weight = weight[i];
    }

    sort(items.begin(), items.end(), comp);

    double totalVal = 0;

    for (int i = 0; i < n; i++) {
        if (items[i].weight <= w) {
            totalVal += items[i].price;
            w -= items[i].weight;
        } else {
            totalVal += ((double)items[i].price / items[i].weight) * w;
            break;
        }
    }

    return totalVal;
}

int main() {
    vector<int> price = {60, 100, 120};
    vector<int> weight = {10, 20, 30};
    int capacity = 50;

    double maxValue = Knapsack(price, weight, capacity);
    cout << fixed << setprecision(2);
    cout << "Total value in knapsack: " << maxValue << endl;

    return 0;
}


