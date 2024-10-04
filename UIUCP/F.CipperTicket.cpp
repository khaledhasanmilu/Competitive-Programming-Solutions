#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        int X, Y;
        cin >> X >> Y;
        if (X < Y)
        {
            cout << "FIRST" << endl;
        }
        else if (X == Y)
        {
            cout << "ANY" << endl;
        }
        else
        {
            cout << "SECOND" << endl;
        }
    }

    return 0;
}