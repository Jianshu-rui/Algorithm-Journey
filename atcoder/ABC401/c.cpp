#include <bits/stdc++.h>
using namespace std;

long long a[1000010];
long long mod = 1e9;
int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);

    // Your code here
    long long n, k;
    cin >> n >> k;
    for (int i = 0; i < k; i++) a[i] = 1;
    long long que = k;
    for (int i = k; i <= n; i++) {
        a[i] = que % mod; // ��ǰ��Ϊ���ں�
        que = (que + a[i] - a[i - k] + mod) % mod; // ���´��ں�
    }
    cout << a[n] % mod << endl;
    return 0;
}