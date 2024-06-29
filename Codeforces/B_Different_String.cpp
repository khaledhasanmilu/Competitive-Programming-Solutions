#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        // Sort the string
        sort(s.begin(), s.end());

        // Check if the sorted string is the same as the original
        if (s.size() == 1 || s[0] == s[s.size() - 1]) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            cout << s << endl;
        }
    }

    return 0;
}
