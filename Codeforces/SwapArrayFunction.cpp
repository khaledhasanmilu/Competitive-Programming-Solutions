#include <bits/stdc++.h>
using namespace std;

void reverseArray(long long arr[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int s = 0, en = n - 1;
    while (s < en) {
        swap(arr[s], arr[en]);
        s++;
        en--;
    }
    for (int i = 0; i < n; i++) {
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
