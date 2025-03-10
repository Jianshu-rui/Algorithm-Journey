#include <bits/stdc++.h>
using namespace std;

string s;

int solve() {
    int n = s.size();
    // 长度为1的字符串不能由更短子串循环构成，应返回0
    if (n == 1) return 0;
    
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            string sub = s.substr(0, i);
            bool flag = true;
            for (int j = i; j < n; j += i) {
                string temp = s.substr(j, i);
                if (temp != sub) {
                    flag = false;
                    break;
                } 
            }
            if (flag) {
                return i;
            }
        }
    }
    return n; // 如果没有更小的循环子串，返回n表示整个字符串
}

int main() {
    cin >> s;
    int t = solve();
    
    // 如果整个字符串就是最小循环单位，则认为不是循环的
    if (t == s.size() || t == 0) {
        cout << "0" << endl; // 输出0表示非循环
    } else {
        cout << t << endl; // 输出最小循环子串的长度
    }
    return 0;
}