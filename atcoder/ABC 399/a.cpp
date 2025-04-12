#include <bits/stdc++.h>
using namespace std;

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);

    // Your code here
    int n;
    string a, b;
    cin >> n >> a >> b;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) cnt++;
    }
    cout << cnt << endl;
    return 0;
}