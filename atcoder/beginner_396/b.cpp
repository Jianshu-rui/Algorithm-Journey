#include <bits/stdc++.h>
using namespace std;

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);

    // Your code here
    stack<int> s;
    int n;
    cin >> n;
    int type, x;
    while (n--) {
        cin >> type;
        if (type == 1) {
            cin >> x;
            s.push(x);
        } else if (type == 2) {
            if (s.empty()) {
                cout << "0" << endl;
            } else {
                cout << s.top() << endl;
                s.pop();
            }
        }
    }
    return 0;
}