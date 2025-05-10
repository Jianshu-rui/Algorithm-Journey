#include <bits/stdc++.h>
using namespace std;

const int N = 110;
int n, m;

bool st[N];
int cnt;
int first_place[N];
int max_place = 0;
int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);

    // Your code here
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (st[x] == false) {
            st[x] = true;
            cnt++;
            first_place[x] = i;
            max_place = max(max_place, i);
        }
    }

    if (cnt < m) {
        cout << 0 << endl;
    } else {
        cout << n - max_place << endl;
    }
    return 0;
}