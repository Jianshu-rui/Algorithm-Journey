#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverse(string &s, int l, int r) {
        for (int i = l, j = r; i < j; i++, j--) {
            swap(s[i], s[j]);
        }
    }
    string reverseStr(string s, int k) {
        for (int i = 0; i < s.size(); i += 2 * k) {
            reverse(s, i, min(i + k - 1, (int)s.size() - 1));
        }
    }
};

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);

    // Your code here

    return 0;
}