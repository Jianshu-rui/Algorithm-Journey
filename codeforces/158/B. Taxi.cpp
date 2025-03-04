#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    // Your code here
    int n;
    cin >> n;
    int cnt[5] = {0};
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        cnt[x]++;
    }
    int ans = 0;
    ans += cnt[4];
    ans += cnt[3];
    cnt[1] -= cnt[3];
    ans += cnt[2] / 2;
    cnt[2] %= 2;
    if (cnt[2] == 1) {
        ans++;
        cnt[1] -= 2;
    }
    if (cnt[1] > 0) {
        ans += (cnt[1] + 4 - 1) / 4;
    }
    cout << ans << endl;
    return 0;
}