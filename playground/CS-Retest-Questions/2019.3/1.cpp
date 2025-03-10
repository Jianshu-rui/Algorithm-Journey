#include <bits/stdc++.h>
using namespace std;

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);

    // Your code here
    string s;
    cin >> s;
    int pre = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[pre] == s[i]) {
            continue;
        } else {
            cout << s.substr(pre, i - pre) << endl;
            pre = i;
        }
    }
    cout << s.substr(pre, s.size() - pre) << endl;
    return 0;
}