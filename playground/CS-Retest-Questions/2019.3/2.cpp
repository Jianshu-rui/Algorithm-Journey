#include <bits/stdc++.h>
using namespace std;

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);

    // Your code here
    string s;
    cin >> s;
    int pre = 0;
    priority_queue<int, vector<int>, greater<int>> heap;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ',') {
            heap.push(stoi(s.substr(pre, i - pre)));
            pre = i + 1;
        }
    }
    heap.push(stoi(s.substr(pre, s.size() - pre)));
    int ans = 0;
    while (heap.size() > 1) {
        int first = heap.top();
        heap.pop();
        int second = heap.top();
        heap.pop();
        ans += first + second;
        heap.push(first + second);
    }
    cout << ans << endl;
    return 0;
}