#include <bits/stdc++.h>
using namespace std;

int cnt[14];
bool three, two;
int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);

    // Your code here
    int n = 7;
    int x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        cnt[x]++;
    }
    for (int i = 1; i <= 13; i++) {
        if (cnt[i] >= 3) {
            three = true;
        } else if (cnt[i] >= 2) {
            two = true;
        }
    }
    if ((three && two)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}