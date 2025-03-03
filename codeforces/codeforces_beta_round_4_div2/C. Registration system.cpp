#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string, int> m;
    int n;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++) {
        cin >> s;
        if (m.find(s) == m.end()) {
            m[s] = 1;
            cout << "OK" << endl;
        } else {
            string s1 = s + to_string(m[s]);
            m[s]++;
            m[s1] = 1;
            cout << s1 << endl; 
        }
    }
    return 0;
}