#include <bits/stdc++.h>
using namespace std;

bool check1(char c) {
    return c == '(' || c == '[' || c == '{';
}

bool check2(char a, char b) {
    return (a == '(' && b == ')') || (a == '[' && b == ']') || (a == '{' && b == '}');
}

bool check3(char c) {
    if (c >= '0' && c <= '9' || c == ' ' || c == '+' || c == '-') return true;
    return false;
}

bool check4(char c) {
    return c == ')' || c == ']' || c == '}';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    // Your code here
    string s;
    getline(cin, s);
    cout << s << endl;
    string res = "";
    stack<char> st;
    bool flag = true;
    for (int i = 0; i < s.size(); i++) {
        // cout << s[i] << endl;
        if (check3(s[i])) continue;
        if (st.empty() || check1(s[i])) {
            st.push(s[i]);
            res += s[i];
        } else if (check4(s[i])) {
            if (check2(st.top(), s[i])) {
                st.pop();
                res += s[i];
            } else {
                flag = false;
                st.pop();
                res += s[i];
            }
        } else {
            cout << "input error" << endl;
            return 0;
        }
    }
    if (flag && st.empty()) cout << "yes " << res << endl;
    else cout << "no " << res << endl;
    return 0;
}