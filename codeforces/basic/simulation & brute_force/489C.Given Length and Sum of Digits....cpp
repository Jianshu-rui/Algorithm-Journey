#include <bits/stdc++.h>
using namespace std;
int a[110], b[110];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    // Your code here
    
    int m, s;
    cin >> m >> s;
    if (s > 9 * m || (s == 0 && m > 1)) {
        cout << "-1 -1" << endl;
        return 0;
    }
    int tag = 0;
    for (int i = 0; i < m; i++) {
        if (s >= 9) {
            a[i] = 9;
            s -= 9;
            tag = i;
            if (s == 0) break;
        } else {
            a[i] = s;
            s = 0;
            tag = i;
            break;
        }
    }
    int last = a[tag];
    int index = m - tag - 1;
    // 0 1 2 3 4
    // 4 3 2 1 0
    // tag = 3, index = 5 - 3 - 1 = 1
    b[0] = 1;
    last -= 1;
    b[index] += last;
    for (int i = index + 1; i < m; i++) {
        b[i] = 9;
    }

    for (int i = 0; i < m; i++) {
        cout << b[i];
    }
    cout << " ";
    for (int i = 0; i < m; i++) {
        cout << a[i];
    }
    cout << endl;
    return 0;
}