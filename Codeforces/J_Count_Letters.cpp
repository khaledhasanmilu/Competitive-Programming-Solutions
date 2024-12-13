#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    string S;
    cin >> S;

    vector<int> frequency(26, 0);

    for (char c : S) {
        frequency[c - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        if (frequency[i] > 0) {
            cout << char(i + 'a') << " : " << frequency[i] << endl;
        }
    }

    return 0;
}