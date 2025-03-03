#include <bits/stdc++.h>
using namespace std;

const int N = 1000010;

set<long long> t_primes;


void get_primes() {
    static bool is_not_prime[N];
    // ΪʲôҪ��static? ��Ϊ����is_not_prime����ֻ���ʼ��һ��
    // �������static, ÿ�ε���get_primes���������ʼ��һ��is_not_prime����
    // �������˷Ѻܶ�ʱ��
    // static ����Ĭ�ϳ�ʼ��Ϊ0
    // static��ȫ�ֵ��𣿲��ǣ�staticֻ�ڵ�ǰ�ļ�����Ч
    // ���������п��Է���is_not_prime�����𣿲����ԣ���Ϊis_not_prime��get_primes�����ľֲ�����
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