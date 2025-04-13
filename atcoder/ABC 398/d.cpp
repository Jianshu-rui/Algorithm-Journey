#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> PII;

set<PII> s;

int n, r, c;
string str;

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);

    // Your code here
    cin >> n >> r >> c;
    cin >> str;
    int x = 0, y = 0;
    s.insert(PII(x, y));
    for (int i = 0; str[i]; i++) {
        switch(str[i]) {
            case 'N': x += 1, r += 1; break;
            case 'S': x -= 1, r -= 1; break;
            case 'W': y += 1, c += 1; break;
            case 'E': y -= 1, c -= 1; break;
        }
        s.insert(PII(x, y));
        if (s.find(PII(r, c)) == s.end()) {
            cout << 0;
        } else {
            cout << 1;
        }
    }
    cout << endl;
    return 0;
}