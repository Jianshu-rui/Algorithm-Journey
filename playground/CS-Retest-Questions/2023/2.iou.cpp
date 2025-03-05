#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    // Your code here
    string a, b;
    cin >> a >> b;
    unordered_set<char> s;
    for (int i = 0; i < a.size(); i++) {
        s.insert(a[i]);
    }
    string ans = "";
    for (int i = 0; i < b.size(); i++) {
        if (s.find(b[i]) != s.end()) {
            ans += b[i];
            s.erase(b[i]);
        }
    }
    cout << ans << endl;
    return 0;
}