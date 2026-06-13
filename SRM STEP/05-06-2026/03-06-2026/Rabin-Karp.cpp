#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

int main() {
    string s;
    cin >> s;

    int L;
    cin >> L;

    int n = s.size();

    if (L > n) {
        cout << "Distinct Substrings: 0\n";
        cout << "Repeated Substrings: 0\n";
        cout << "First Repeat: none\n";
        return 0;
    }

    const long long BASE = 257;
    const long long MOD = 1000000007;

    long long power = 1;

    for (int i = 0; i < L - 1; i++)
        power = (power * BASE) % MOD;

    long long hashVal = 0;

    for (int i = 0; i < L; i++)
        hashVal = (hashVal * BASE + s[i]) % MOD;

    unordered_map<long long, vector<int>> mp;

    mp[hashVal].push_back(0);

    unordered_set<string> distinctSubs;
    unordered_set<string> repeatedSubs;

    string firstRepeat = "";
    int earliestPos = n + 1;

    string firstWindow = s.substr(0, L);
    distinctSubs.insert(firstWindow);

    for (int i = 1; i <= n - L; i++) {

        hashVal =
            (hashVal - s[i - 1] * power % MOD + MOD) % MOD;
        hashVal = (hashVal * BASE + s[i + L - 1]) % MOD;

        string cur = s.substr(i, L);

        distinctSubs.insert(cur);

        if (mp.count(hashVal)) {

            for (int pos : mp[hashVal]) {

                if (s.compare(pos, L, cur) == 0) {

                    repeatedSubs.insert(cur);

                    if (pos < earliestPos) {
                        earliestPos = pos;
                        firstRepeat = cur;
                    }

                    break;
                }
            }
        }

        mp[hashVal].push_back(i);
    }

    cout << "Distinct Substrings: "
         << distinctSubs.size() << "\n";

    cout << "Repeated Substrings: "
         << repeatedSubs.size() << "\n";

    if (firstRepeat.empty())
        cout << "First Repeat: none\n";
    else
        cout << "First Repeat: "
             << firstRepeat << "\n";

    return 0;
}