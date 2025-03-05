#include <bits/stdc++.h>
using namespace std;

bool check(string s) {
    bool a[26] = {0};
    for (int i = 0; i < s.size(); i++) {
        if (a[s[i] - 'a']) return false;
        a[s[i] - 'a'] = true;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    // Your code here
    string s;
    int k;
    cin >> s >> k;
    if (k <= 0|| k > s.size()) {
        cout << "error" << endl;
        return 0;
    }
    vector<string> res;
    
    for (int i = 0; i < s.size() - k + 1; i++) {
        string t = s.substr(i, k);
        if (check(t)) {
            res.push_back(t);
        }
    }
    
    if (res.size() == 0) {
        cout << "error" << endl;
        return 0;
    }

    for (int i = 0; i < res.size(); i++) {
        if (i != 0) cout << " ";
        cout << res[i];
    }
    cout << endl;
    return 0;
}