#include <bits/stdc++.h>
using namespace std;

int stringToint(string t) {
    int ans = 0;
    for (int i = 0; i < t.size(); i++) {
        ans = ans * 10 + (t[i] - '0');
    }
    return ans;
}

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);

    // Your code here
    string s;
    cin >> s;
    int pre = 0;
    unordered_set<int> st;
    int res = -1;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ',') {
            int num = stringToint(s.substr(pre, i - pre));
            pre = i + 1;
            if (st.find(num) == st.end()) {
                st.insert(num);
            } else {
                res = num;
            }
        }
    }
    int num = stringToint(s.substr(pre, s.size() - pre));
    if (st.find(num) == st.end()) {
        st.insert(num);
    } else {
        res = num;
    }
    cout << res << endl;
    return 0;
}