#include <bits/stdc++.h>
using namespace std;

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);

    // Your code here
    string t, u;
    cin >> t >> u;
    int i, j;
    for (i = 0, j = 0; i < t.size() && j < u.size(); i++) {
        if (t[i] == u[j] || t[i] == '?') {
            j++;
        } else {
            i = i - j;
            j = 0;
        }
    }
    if (j == u.size()) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}