#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t; 

    while (t--)
    {
        int n;
        cin >> n; 
        vector<int> arr(n);
        
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        bool is_sorted = true;
        for (int i = 0; i < n - 1; i++) 
        {
            if (arr[i] > arr[i + 1])
            {
                is_sorted = false;
                break;
            }
        }

        if (is_sorted)
        {
            cout << "YES" << endl; 
        }
        else
        {
            cout << "NO" << endl; 
        }
    }

    return 0;
}
