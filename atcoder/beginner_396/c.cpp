#include <bits/stdc++.h>
using namespace std;

int a[200010];
int b[200010];

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);

    // Your code here
    int n, m;
    cin >> n >> m;
    long long ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int j = 0; j < m; j++) {
        cin >> b[j];
    }
    sort(a, a + n, greater<int>());
    sort(b, b + m, greater<int>());

    int i = 0, j = 0;
    for (; i < n && j < m; i++, j++) {
        if (b[j] < 0) {
            break;
        }
        if (a[i] + b[j] > 0) {
            ans += a[i] + b[j];
        } else {
            break;
        }
    }
    for (; i < n; i++) {
        if (a[i] > 0) {
            ans += a[i];
        } else {
            break;
        }
    }

    cout << ans << endl;

    return 0;
}