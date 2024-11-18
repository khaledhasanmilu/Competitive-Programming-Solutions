#include <bits/stdc++.h>
using namespace std;

void reverseArray(long long arr[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    long long arr[n];  
    reverseArray(arr, n);

    return 0;
}
