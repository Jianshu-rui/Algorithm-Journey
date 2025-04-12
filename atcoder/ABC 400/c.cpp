#include <bits/stdc++.h>
using namespace std;

/*
    x = 2^a * b^2
    a = 1, 2, 3, 4 ...
    a = 1
    x / 2 = b^2


*/
long long n;

// 二分：找到最大的 a 使得 2^a * b <= n
int binary_search(int b) {
    int l = 0, r = 1e9;
    while (l < r) {
        int mid = (l + r + 1) / 2;
        if (b * (1LL << mid) <= n) {
            l = mid;
        } else {
            r = mid - 1;
        }
    }
    return l;
}

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);

    // Your code here

    
    cin >> n;
    int cnt = 0;
    // a > 0, b > 0
    for (int i = 1; i <= (n / i); i++) {
        int b = i * i;

        int count = binary_search(b);
        cnt += count;
        
    }
    cout << cnt << endl;
    return 0;
}