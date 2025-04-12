#include <bits/stdc++.h>
using namespace std;

int score[110];
int a[110];
int n;

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);

    // Your code here
    cin >> n;
    int last = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        score[a[i]]++;
        last = max(a[i], last);
    }
    int r = 1;
    for (int j = last; j >= 0; j--) {
        if (score[j] != 0) {
            int cnt = score[j];
            score[j] = r;
            r += cnt;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << score[a[i]] << endl;
    }
    
    return 0;
}