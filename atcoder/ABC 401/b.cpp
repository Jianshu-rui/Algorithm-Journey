#include <bits/stdc++.h>
using namespace std;

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);

    // Your code here
    int log = 0;
    int n;
    int cnt = 0;
    string s;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s;
        if (s == "login") {
            log = 1;
        } else if (s == "logout") {
            log = 0;
        } else if (s == "public") {
            continue;
        } else if (s == "private") {
            if (log == 0) {
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}