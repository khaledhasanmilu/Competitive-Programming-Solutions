#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    cin >> n;

    vector<pair<int, int>> s(n);  
    set<pair<int, int>> st;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        s[i] = {x, y};            
        st.insert({x, y});       
    }

    int scount = 0;

    for (int i = 0; i < n; i++) {
        int x = s[i].first;
        int y = s[i].second;

        if (st.count({x, y - 1}) &&   
            st.count({x, y + 1}) &&   
            st.count({x - 1, y}) && 
            st.count({x + 1, y})) {   
            scount++;
        }
    }
    cout << scount << endl;

    return 0;
}
