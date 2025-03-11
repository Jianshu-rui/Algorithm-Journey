#include <bits/stdc++.h>
using namespace std;

int solve(string &s) {
    int n = s.size();
    for (int i = 1; i <= n / 2; i++) {
        bool flag = true;
        string temp = s.substr(0, i);
        for (int j = i; j < n; j += i) {
            if (s.substr(j, i) != temp) {
                flag = false;
                break;
            }
        }
        if (flag) {
            return n / i;
        }
    }
    return 1;
}

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);

    // Your code here
    string s;
    cin >> s;
    cout << solve(s) << endl;
    return 0;
}