#include <bits/stdc++.h>
using namespace std;

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);

    // Your code here
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> s(n);
    int currentsum = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        currentsum += v[i];
        s[i] = currentsum;
    }
    int l, r;
    while (cin >> l >> r) {
        if (l == 0) cout << s[r] << endl;
        else cout << s[r] - s[l - 1] << endl;
    }
    return 0;
}