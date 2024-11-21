#include <iostream>
using namespace std;

bool isPalindromeArray(int Arr[], int N) {
    int left = 0, right = N - 1;
    while (left < right) {
        if (Arr[left] != Arr[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    int N;
    cin >> N;
    int Arr[N];
    for (int i = 0; i < N; i++) {
        cin >> Arr[i];
    }
    if (isPalindromeArray(Arr, N)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
