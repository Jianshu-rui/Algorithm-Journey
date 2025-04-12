#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    // Your code here
    int n, m;
    cin >> n >> m;
    long long ans = 0;
    int cur = 1;
    for (int i = 0; i < m; i++) {
        int t;
        cin >> t;
        if (t >= cur) {
            ans += t - cur;
        } else {
            ans += n - cur + t;
        }
        cur = t;
    }
    cout << ans << endl;
    return 0;
}