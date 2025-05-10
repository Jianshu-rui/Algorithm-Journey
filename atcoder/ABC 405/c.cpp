#include <bits/stdc++.h>
using namespace std;
/*
��������A�����в�ͬ������(i,j)�ĳ˻�֮�� S = ��_{1��i<j��N} A[i]*A[j]

��ѧ�Ƶ���
1. �����ܺ͵�ƽ����(��A[i])? = ��A[i]? + 2����_{i<j}A[i]A[j]
   - ���չ�����������Ԫ�ص�ƽ����������˻���
   - �����˻����У�ÿ����ͬ��(i,j)�Ի�������Σ�i<j��i>j��

2. ����ɵã�
   ��_{i<j}A[i]A[j] = [(��A[i])? - ��A[i]?] / 2

�㷨˼·��
1. ֱ��ö�����ж�(i,j)��ʱ�临�Ӷ�ΪO(N?)������N=3e5�ᳬʱ
2. ʹ��������ѧ��ʽ�Ż���O(N)��
   - ��������Ԫ�صĺ�sum = ��A[i]
   - ��������Ԫ�ص�ƽ����sum_sq = ��A[i]?
   - ���Ϊ(sum? - sum_sq) / 2

�ؼ��㣺
- ʹ��long long��ֹ�������
- ע�����˳�������ת���������м������
*/
int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);

    // Your code here
    long long n;
    cin >> n;
    vector<long long> a(n);
    long long sum = 0;
    long long sum_q = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
        sum_q += (long long)a[i] * a[i];
    }
    long long ans = (sum * sum - sum_q) / 2;
    cout << ans << endl;
    return 0;
}