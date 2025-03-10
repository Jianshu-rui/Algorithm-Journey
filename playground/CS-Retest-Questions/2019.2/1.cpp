#include <bits/stdc++.h>
using namespace std;

int n, s;
stack<int> sta;

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);

    // Your code here
    cin >> n >> s;
    while (s) {
        sta.push(s % n);
        s /= n;
    }
    while (!sta.empty()) {
        cout << sta.top();
        sta.pop();
    }
    cout << endl;
    return 0;
}