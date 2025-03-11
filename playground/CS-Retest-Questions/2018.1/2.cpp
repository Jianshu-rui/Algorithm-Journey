#include <bits/stdc++.h>
using namespace std;

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);

    // Your code here
    string s1, s2;
    cin >> s1 >> s2;
    unordered_set<char> set;
    for (int i = 0; i < s1.size(); i++) {
        set.insert(s1[i]);
    }
    string res = "";
    for (int i = 0; i < s2.size(); i++) {
        if (set.find(s2[i]) != set.end()) {
            res += s2[i];
            set.erase(s2[i]);
        }
    }
    cout << res << endl;
    return 0;
}