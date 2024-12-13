#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int serja = 0;
    int deema = 0;
    int choice = 1; // 1 for Serja, 2 for Deema

    while (!v.empty())
    {
        if (choice == 1)
        {
            if (v.front() > v.back())
            {
                serja += v.front();
                v.erase(v.begin());
            }
            else
            {
                serja += v.back();
                v.pop_back();
            }
            choice = 2;
        }
        else if (choice == 2)
        {
            if (v.front() > v.back())
            {
                deema += v.front();
                v.erase(v.begin());
            }
            else
            {
                deema += v.back();
                v.pop_back();
            }
            choice = 1;
        }
    }

    cout << serja << " " << deema << endl;

    return 0;
}
