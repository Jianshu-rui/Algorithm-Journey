#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 10;
const int M = 1e6 + 10;
int a[N];
int b[M];


int bs(int x, int l, int r) {
    while (l <= r) {
        int mid = (l + r) / 2;
        if (a[mid] == x) {
            return mid;
        } else if (a[mid] < x) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return -1;
}

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);

    // Your code here
    int n, d;
    cin >> n >> d;
    int mmax = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mmax = max(mmax, a[i]);
        b[a[i]]++;
    }
    sort(a, a + n);
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int left = a[i];
        int right = a[i] + d;
        if (right > mmax) break;
        int l = i + 1, r = n - 1;

        int t = bs(right, l, r);
        if (t == -1) continue;

        int mmin_cnt = min(b[left], b[right]);
        i += b[left];
        ans += mmin_cnt;
    }
    
    cout << ans << endl;
    return 0;
}