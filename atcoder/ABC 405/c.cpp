#include <bits/stdc++.h>
using namespace std;
/*
计算序列A中所有不同索引对(i,j)的乘积之和 S = Σ_{1≤i<j≤N} A[i]*A[j]

数学推导：
1. 考虑总和的平方：(ΣA[i])? = ΣA[i]? + 2·Σ_{i<j}A[i]A[j]
   - 左边展开后包含所有元素的平方项和两两乘积项
   - 两两乘积项中，每个不同的(i,j)对会出现两次（i<j和i>j）

2. 移项可得：
   Σ_{i<j}A[i]A[j] = [(ΣA[i])? - ΣA[i]?] / 2

算法思路：
1. 直接枚举所有对(i,j)的时间复杂度为O(N?)，对于N=3e5会超时
2. 使用上述数学公式优化到O(N)：
   - 计算所有元素的和sum = ΣA[i]
   - 计算所有元素的平方和sum_sq = ΣA[i]?
   - 结果为(sum? - sum_sq) / 2

关键点：
- 使用long long防止整数溢出
- 注意计算顺序和类型转换，避免中间结果溢出
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