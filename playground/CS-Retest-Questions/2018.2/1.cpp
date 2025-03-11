#include <bits/stdc++.h>
using namespace std;

bool isEqual(char a, char b) {
    return tolower(a) == tolower(b);
}

void solve(string &s, int left, int right, int &count, int &maxlen) {
    
}


int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);

    // Your code here
    string s;
    cin >> s;
    int count = 0;
    int maxlen = 0;
    for (int i = 0; i < s.size(); i++) {
        solve(s, i, i, count, maxlen);
        solve(s, i, i + 1, count, maxlen);
    }
    cout << maxlen << " " << count << endl;
    return 0;
}