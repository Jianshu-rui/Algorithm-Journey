#include <bits/stdc++.h>
using namespace std;

int pri(char c) {
    switch(c) {
        case '(': return 0;
        case '+': return 1;
        case '-': return 1;
        case '*': return 2;
        case '/': return 2;
    }
    return -1;
}

stack<char> sta;

bool check(char c) {
    if (sta.empty()) return true;
    if (sta.top() == '(') return true;
    if (pri(sta.top()) < pri(c)) return true;
    
    return false;
}

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);

    // Your code here
    string s;
    cin >> s;
    
    string res = "";
    for (int i = 0; i < s.size(); i++) {
        if (isdigit(s[i])) {
            res.push_back(s[i]);
        } else if (s[i] == '(') {
            sta.push(s[i]);
        } else if (s[i] == ')') {
            while (sta.top() != '(') {
                res.push_back(sta.top());
                sta.pop();
            }
            sta.pop();
        } else {
            while (!check(s[i])) {
                res.push_back(sta.top());
                sta.pop();
            }
            sta.push(s[i]);
        }
    }
    while (!sta.empty()) {
        res.push_back(sta.top());
        sta.pop();
    }
    cout << res << endl;
    return 0;
}