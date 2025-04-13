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

ll F(ll x, ll y) {
    return x * x + x * y + y * y;
}

ll bs(ll a, ll b) {
    ll l = 1, r = sqrt(b);
    while (l <= r) {
        ll y = (l + r) / 2;
        ll x = a + y;
        ll new_b = F(x, y);
        if (new_b == b) {
            return y;
        } else if (new_b < b) {
            l = y + 1;
        } else {
            r = y - 1;
        }
    }
    return -1;
}

ll bs2(ll a, ll b) {
    ll l = 1, r = sqrt(b) + 1;
    while (l < r) {
        ll y = (l + r) / 2;
        ll x = a + y;
        ll new_b = F(x, y);
        if (new_b == b) {
            return y;
        } else if (new_b < b) {
            l = y + 1;
        } else {
            r = y;
        }
    }
    return -1;
}

ll bs3(ll a, ll b) {
    ll l = 1, r = sqrt(b) + 1;
    while (l < r) {
        ll y = (l + r + 1) / 2;
        ll x = a + y;
        ll new_b = F(x, y);
        if (new_b == b) {
            return y;
        } else if (new_b < b) {
            l = y;
        } else {
            r = y - 1;
        }
    }
    return -1;
}

ll bs_right(ll a, ll b) {
    ll l = 1, r = sqrt(b);
    while (l < r) { // ????? l < r
        ll mid = (l + r + 1) / 2; // ????
        ll x = a + mid;
        ll new_b = F(x, mid);
        if (new_b <= b) { // ???????????????
            l = mid;
        } else {
            r = mid - 1;
        }
    }
    return (F(a + l, l) == b) ? l : -1; // ????????????
}

ll bs_left(ll a, ll b) {
    ll l = 1, r = sqrt(b);
    while (l < r) { // ????? l < r
        ll mid = (l + r) / 2; // ????
        ll x = a + mid;
        ll new_b = F(x, mid);
        if (new_b >= b) { // ???????????????
            r = mid;
        } else {
            l = mid + 1;
        }
    }
    return (F(a + l, l) == b) ? l : -1; // ????????????
}

ll bs_middle(ll a, ll b) {
    ll l = 1, r = sqrt(b) + 1;
    while (l <= r) { // ????? l <= r
        ll mid = (l + r) / 2; // ????
        ll x = a + mid;
        ll new_b = F(x, mid);
        if (new_b == b) { // ??????
            return mid;
        } else if (new_b < b) {
            l = mid + 1; // ?????
        } else {
            r = mid - 1; // ?????
        }
    }
    return -1; // ??????
}

int main() {
    cin >> n;
    for (ll a = 1; a * a * a <= n; a++) {
        if (n % a != 0) continue;
        ll b = n / a;
        
        ll y = bs_right(a, b);
        if (y != -1) {
            cout << y + a << " " << y << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}