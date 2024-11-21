#include <bits/stdc++.h>
using namespace std;

int main() {
    char s[10000];
    while (cin.getline(s, 10000)) {
        int size = strlen(s);
        string word;
        for (int i = 0; i < size; i++) {
            if (s[i] != ' ') {
                word.push_back(s[i]);
            }
        }
        sort(word.begin(), word.end());
        cout << word << endl;
    }
    return 0;
}
