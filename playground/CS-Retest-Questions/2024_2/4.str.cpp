#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    // Your code here

    vector<string> v;
    string s;
    while (cin >> s) {
        v.push_back(s);
    }
    unordered_set<char> st;
    for (int i = 0; i < v[0].size(); i++) {
        st.insert(v[0][i]);
    }
    for (int i = 1; i < v.size(); i++) {
        unordered_set<char> st2;
        for (int j = 0; j < v[i].size(); j++) {
            if (st.find(v[i][j]) == st.end() && st2.find(v[i][j]) == st2.end()) {
                v[0].push_back(v[i][j]);
                st2.insert(v[i][j]);
                // st.insert(v[i][j]);
            }
        }
    }
    cout << v[0] << endl;
    return 0;
}