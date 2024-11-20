#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, b, c;
    char sign, e;
    cin >> a >> sign >> b >> e >> c;
    if (sign == '+')
    {
        if (a + b == c)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << a + b << endl;
        }
    }
    else if (sign == '-')
    {
        if (a - b == c)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << a - b << endl;
        }
    }
    else if (sign == '*')
    {
        if (a * b == c)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << a * b << endl;
        }
    }

    return 0;
}