#include <bits/stdc++.h>
using namespace std;


// ioioioio
// io --- > 0
// iioo --- > 2
// iioioo --- > 2
// iioioioo --- > 2
int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);

    // Your code here
    string s;
    cin >> s;
    int cnt = 0;
    stack<char> st;
    for (int i = 0; i < s.size(); i++) {
        if (st.empty()) {
            if (s[i] == 'o') cnt++;
            else if (s[i] == 'i') st.push(s[i]);
        } else if (st.top() == 'i') {
            if (s[i] == 'o') {
                st.pop();
                continue;
            } else if (s[i] == 'i') {
                cnt++;
            }
        }
    }
    cnt += st.size();
    cout << cnt << endl;
    return 0;
}