#include <bits/stdc++.h>
using namespace std;

const long long INF = 1e9;

long long n, m, x;

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);

    // Your code here
    cin >> n >> m;

    for (int i = 0; i <= m; i++) {
        long long t = pow(n, i);
        if (t > INF) {
            cout << "inf" << endl;
            return 0;
        }
        if (x > INF - t) {
            cout << "inf" << endl;
            return 0;
        }
        x += t;
    }
    cout << x << endl;
    return 0;
}