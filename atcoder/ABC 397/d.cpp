#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, x, y;

// x^3 - y^3 = n
// (x - y)(x^2 + xy + y^2) = n
// a = x - y ------ 1
// x = a + y ------- 1'
// b = x^2 + xy + y^2 ------ 2
// 1'´úÈë2
// b = (a + y)^2 + (a + y)y + y^2
// b = a^2 + 2ay + y^2 + ay + y^2 + y^2
// b = a^2 + 3y^2 + 3ay
// 3y^2 + 3ay + a^2 - b = 0
// y = (-3a +- sqrt(9a^2 - 12(a^2 - b))) / 6
// y = (-3a + sqrt(12b - 3q^2)) / 6

bool isSquare(ll x) {
    ll y = sqrt(x);
    return y * y == x;
}

bool solve() {
    for (ll a = 1; a * a <= n; a++) {
        if (n % a != 0) continue;
        ll b = n / a;
        ll delta = 12 * b - 3 * a * a;
        if (delta <= 0) continue;
        if (isSquare(delta)) {
            ll sqrtDelta = sqrt(delta);
            y = (-3 * a + sqrtDelta);
            if (y % 6 == 0) {
                y /= 6;
                if (y <= 0) continue;
                x = a + y;
                return true;
            }
        }
    }
    return false;
}

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);

    // Your code here
    cin >> n;
    if (solve()) {
        cout << x << " " << y << endl;
    } else {
        cout << -1 << endl;
    }
    return 0;
}