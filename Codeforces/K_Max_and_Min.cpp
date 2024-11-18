#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int max1= max(b,c);
    int min1 =  min(b, c);
    int maximum = max(a,max1);
    int minimum = min(a,min1);
    cout << minimum<<" "<<maximum<< endl;
    

    return 0;
}
