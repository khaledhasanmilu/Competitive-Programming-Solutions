#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 0;
    while (n > 0)
    {
        int mod = n % 10;
        if (mod % 2 == 0)
        {
            count++;
        }

        n /= 10;
    }
    if (count > 0)
    {
        cout << "SAD" << endl;
    }
    else
    {
        cout << "HAPPY" << endl;
    }

    return 0;
}