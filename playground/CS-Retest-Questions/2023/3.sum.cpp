#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    // Your code here
    int n;
    cin >> n;
    double a = 0, b = 4, flag = -1;
    double ans = 0;
    for (int i = 0; i < n; i++) {
        // 打印三个a, b, flag的值
        cout << a << " " << b << " " << flag << endl;
        ans += flag * (1 / (a + b));
        flag *= -1;
        b = b + a;
        a = b - a;
    }
    cout << ans << endl;
    return 0;
}