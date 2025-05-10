#include <bits/stdc++.h>
using namespace std;

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);

    // Your code here
    int r, x;
    cin >> r >> x;
    if (r >= 1600 && r <= 2999 && x == 1 || r >= 1200 && r <= 2399 && x == 2) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}