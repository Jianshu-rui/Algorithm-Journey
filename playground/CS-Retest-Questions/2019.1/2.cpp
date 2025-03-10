#include <bits/stdc++.h>
using namespace std;

string s;

int solve() {
    int n = s.size();
    // ����Ϊ1���ַ��������ɸ����Ӵ�ѭ�����ɣ�Ӧ����0
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
    return n; // ���û�и�С��ѭ���Ӵ�������n��ʾ�����ַ���
}

int main() {
    cin >> s;
    int t = solve();
    
    // ��������ַ���������Сѭ����λ������Ϊ����ѭ����
    if (t == s.size() || t == 0) {
        cout << "0" << endl; // ���0��ʾ��ѭ��
    } else {
        cout << t << endl; // �����Сѭ���Ӵ��ĳ���
    }
    return 0;
}