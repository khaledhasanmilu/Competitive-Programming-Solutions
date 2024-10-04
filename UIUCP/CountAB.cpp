#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        int countA = 0;
        int countB = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'A')
            {
                countA++;
            }
            else
            {
                countB++;
            }
        }
        if (countA > countB)
        {
            cout << "A" << endl;
        }
        else
        {
            cout << "B" << endl;
        }
    }

    return 0;
}