#include <bits/stdc++.h>
using namespace std;

int n, k;
string s;

bool check(int ind) {
    if (ind > 0 && s[ind - 1] == '?') return false;
    if (ind < n - 1 && s[ind + 1] == '?') return false;
    return true;
}

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);

    // Your code here

    int dontKnow = 0;
    cin >> n >> k;
    
    cin >> s;
    for (int i = 0; i < n; i++) {
        if (s[i] == '?') dontKnow++;
    }
    for (int i = 0; i < n; i++) {
        if (s[i] == 'o') {
            k--;
            if (i > 0 && s[i - 1] == '?') {
                s[i - 1] = '.';
                dontKnow--;
            }
            if (i < n - 1 && s[i + 1] == '?') {
                s[i + 1] = '.';
                dontKnow--;
            }
        }
    }
    if (k == dontKnow) {
        for (int i = 0; i < n; i++) {
            if (s[i] == '?') s[i] = 'o';
        }
        cout << s << endl;
    } else { // k < dontKnow
        for (int i = 0; i < n; i++) {
            if (s[i] == '?' && check(i)) {
                s[i] = 'o';
            }
        }
        cout << s << endl;
    }
    return 0;
}