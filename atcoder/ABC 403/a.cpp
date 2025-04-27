#include <bits/stdc++.h>
using namespace std;

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);

    // Your code here
    int n;
    long long sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        if (i & 1) {
            sum += x;
        }
    }
    cout << sum << endl;
    return 0;
}