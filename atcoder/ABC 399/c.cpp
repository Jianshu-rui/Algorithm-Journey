#include <bits/stdc++.h>
using namespace std;

const int N = 200010;

int p[N];

int n, m;
int branch_cnt;

bool sset[N];

void init() {
    for (int i = 1; i <= n; i++) p[i] = -1;
}

// ���Һ�������·��ѹ��
int find(int x) {
    if (p[x] < 0) return x; // ����Ǹ��ڵ㣬ֱ�ӷ���
    return p[x] = find(p[x]); // ·��ѹ��
}

// �ϲ���������
void merge(int x, int y) {
    int fx = find(x), fy = find(y);
    if (fx == fy) return; // �Ѿ���ͬһ���ϣ�����ϲ�

    // �����ϴ�С�ϲ�����ֵԽС������Խ��
    if (p[fx] < p[fy]) {
        p[fx] += p[fy]; // ���� fx ���ϵĴ�С
        p[fy] = fx;     // �� fy �ĸ�ָ�� fx
    } else {
        p[fy] += p[fx]; // ���� fy ���ϵĴ�С
        p[fx] = fy;     // �� fx �ĸ�ָ�� fy
    }
}

// int find(int x) {
//     if (p[x] > 0) {
//         p[x] = find(p[x]);
//         return p[x];
//     }
//     return x;
// }

// void merge(int x, int y) {
//     int fx = find(x), fy = find(y);
//     if (fx == fy) return ;
//     p[fx] += p[fy];
//     p[fy] = fx;
// }

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);

    // Your code here
    cin >> n >> m;
    init();
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        merge(a, b);
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        int root = find(i);
        // cout << p[root] << endl;
        if (sset[root] == 0) {
            cnt += (-p[root] - 1);
            sset[root] = 1;
        }
    }

    cout << m - cnt << endl;

    return 0;
}