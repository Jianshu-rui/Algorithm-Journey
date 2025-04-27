#include <bits/stdc++.h>
using namespace std;

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);

    // Your code here
    string s;
    string res = "";
    cin >> s;
    for (int i = 0; s[i]; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            res += s[i];
        }
    }
    cout << res << endl;
    return 0;
}