#include <iostream>
#include <string>
#include <cmath>

using namespace std;

bool is_binary_decimal(int n) {
    // Check if the number contains only 1s and 0s
    string s = to_string(n);
    for (char digit : s) {
        if (digit != '0' && digit != '1') {
            return false;
        }
    }
    return true;
}

bool can_be_product_of_binary_decimals(int n) {
    // Check if the number can be represented as a product of binary decimals
    if (n == 1) {
        return true;
    }
    // Check if n is a perfect square of a binary decimal
    int sqrt_n = sqrt(n);
    if (sqrt_n * sqrt_n == n && is_binary_decimal(sqrt_n)) {
        return true;
    }
    for (int i = 2; i <= sqrt_n; ++i) {
        if (n % i == 0) {
            int quotient = n / i;
            if (is_binary_decimal(i) && is_binary_decimal(quotient)) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        // Output
        if (can_be_product_of_binary_decimals(n)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
