#include <bits/stdc++.h>
using namespace std;

const int N = 1000010;

set<long long> t_primes;


void get_primes() {
    static bool is_not_prime[N];
    // 为什么要用static? 因为这样is_not_prime数组只会初始化一次
    // 如果不用static, 每次调用get_primes函数都会初始化一次is_not_prime数组
    // 这样会浪费很多时间
    // static 数组默认初始化为0
    // static是全局的吗？不是，static只在当前文件中有效
    // 在主函数中可以访问is_not_prime数组吗？不可以，因为is_not_prime是get_primes函数的局部变量
    for (int i = 2; i < N / i; i++) {
        if (!is_not_prime[i]) {
            for (int j = i + i; j < N; j += i) {
                is_not_prime[j] = true;
            }
        }
    }

    for (int i = 2; i < N; i++) {
        if (!is_not_prime[i]) {
            t_primes.insert(i * 1LL * i);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    // Your code here
    int n;
    cin >> n;
    get_primes();
    while (n--) {
        long long x = 0;
        cin >> x;
        // cout << (t_primes.count(x) ? "YES" : "NO") << endl;
        if (t_primes.find(x) != t_primes.end()) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}