#include <bits/stdc++.h>
using namespace std;

int a[30];

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);

    // Your code here
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        a[s[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++) {
        if (a[i] == 0) {
            cout << (char)(i + 'a') << endl;
            return 0;
        }
    }
    return 0;
}