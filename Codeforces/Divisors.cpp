#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i = 1;i<=t;i++)
    {
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 1; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                v.push_back(i);
                if (i != n / i) // Avoid adding the square root twice if n is a perfect square
                    v.push_back(n / i);
            }
        }
        sort(v.begin(), v.end());
        cout<<"Case "<<i<<": ";
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }

        cout << endl;
    }

    return 0;
}
