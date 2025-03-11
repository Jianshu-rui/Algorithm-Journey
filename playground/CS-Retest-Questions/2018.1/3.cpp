#include <bits/stdc++.h>
using namespace std;

string s;

set<char> st;

void dfs(int index) {
    if (index == s.size()) return ;
    bool flag = false;
    if (st.find(s[index]) == st.end()) {
        st.insert(s[index]);
        flag = true;
    }
    dfs(index + 1);
    if (flag) {
        cout << s[index];
    }
}

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);

    // Your code here
    cin >> s;
    dfs(0);
    cout << endl;
    return 0;
}