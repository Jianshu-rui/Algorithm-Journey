#include <bits/stdc++.h>
using namespace std;

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);

    // Your code here
    int a[150];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (i == 0 || a[i] == a[i - 1]) {
            cnt++;
            if (cnt == 3) {
                cout << "Yes" << endl;
                return 0;
            }
        } else {
            cnt = 1;
        }
    }
    cout << "No" << endl;
    return 0;
}