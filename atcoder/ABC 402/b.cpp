#include <bits/stdc++.h>
using namespace std;





int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);

    // Your code here
    int q;
    cin >> q;
    int num, x;
    queue<int> que;
    while (q--) {
        cin >> num;
        if (num == 1) {
            cin >> x;
            que.push(x);
        } else {
            cout << que.front() << endl;
            que.pop();
        }
    }
    return 0;
}