#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    // Your code here
    char c;
    cin >> c;
    if (!isalpha(c)) {
        cout << "input error" << endl;
        return 0;
    }
    string s = "";
    s += c;
    if (islower(c)) {
        int t = c - 'a';
        char ch = c - 1;
        for (int i = 0; i < t; i++) {
            if (i % 2 == 0) {
                s.insert(s.begin(), toupper(ch));     
                s.push_back(toupper(ch));
            } else {
                s.insert(s.begin(), tolower(ch));
                s.push_back(tolower(ch));
            }
            ch--;
        }
    } else {
        int t = c - 'A';
        char ch = c - 1;
        for (int i = 0; i < t; i++) {
            if (i % 2 == 0) {
                s.insert(s.begin(), tolower(ch));     
                s.push_back(tolower(ch));
            } else {
                s.insert(s.begin(), toupper(ch));
                s.push_back(toupper(ch));
            }
            ch--;
        }
    }
    cout << s << endl;
    return 0;
}