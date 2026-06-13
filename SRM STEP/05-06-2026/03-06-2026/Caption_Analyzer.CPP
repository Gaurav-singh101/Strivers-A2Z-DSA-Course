#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string line;
    getline(cin, line);

    stringstream ss(line);
    vector<string> words;
    string word;

    int charCount = 0;

    while (ss >> word) {
        words.push_back(word);
        charCount += word.length();
    }
    
    cout << "Words: " << words.size() << "\n";
    cout << "Characters: " << charCount << "\n";

    cout << "Reversed: ";
    for (int i = words.size() - 1; i >= 0; i--) {
        cout << words[i];
        if (i) cout << " ";
    }
    cout << "\n";

    cout << "Title Case: ";
    for (int i = 0; i < words.size(); i++) {
        string temp = words[i];

        if (!temp.empty()) {
            temp[0] = toupper(temp[0]);

            for (int j = 1; j < temp.size(); j++)
                temp[j] = tolower(temp[j]);
        }

        cout << temp;
        if (i != words.size() - 1) cout << " ";
    }
    cout << "\n";

    return 0;
}