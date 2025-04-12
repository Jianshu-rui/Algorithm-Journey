#include <bits/stdc++.h>
using namespace std;

const int N = 300010;
unordered_set<int> st;

int n;
int a[N];
int s1[N];
int s2[N];

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);

    // Your code here
    
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        st.insert(a[i]);
        s1[i] = st.size();
    }
    st.clear();
    for (int i = n; i >= 1; i--) {
        st.insert(a[i]);
        s2[i] = st.size();
    }
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        ans = max(ans, s1[i - 1] + s2[i]);
    }
    cout << ans << endl;

    return 0;
}