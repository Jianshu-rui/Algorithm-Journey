#include <bits/stdc++.h>
using namespace std;

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);

    // Your code here
    bool flag = true;
    int pre = -1, cur;
    while (cin >> cur) {
        if (pre == -1 || pre > cur) {
            pre = cur;
        } else {
            flag = false;
        }
    }
    if (flag) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }
    return 0;
}