#include <bits/stdc++.h>
using namespace std;

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);

    // Your code here
    int n = 400, a, b;
    cin >> a;

    if (n % a == 0) {
        cout << n / a << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}