#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, r, c;
    string s;
    cin >> n >> r >> c;
    cin >> s;
    
    // �����ۻ��ķ���ƫ��
    vector<int> dr(n+1, 0), dc(n+1, 0);
    for (int i = 0; i < n; i++) {
        dr[i+1] = dr[i];
        dc[i+1] = dc[i];
        
        if (s[i] == 'N') dr[i+1]--;
        else if (s[i] == 'S') dr[i+1]++;
        else if (s[i] == 'W') dc[i+1]--;
        else if (s[i] == 'E') dc[i+1]++;
    }
    
    // Ԥ����ÿ��ʱ��(0,0)���Ƿ��������
    vector<bool> origin_has_smoke(n+1, false);
    origin_has_smoke[0] = true;  // ��ʼʱ��������
    
    for (int t = 1; t <= n; t++) {
        for (int ts = 0; ts < t; ts++) {
            if (origin_has_smoke[ts]) {
                int nr = dr[t] - dr[ts];
                int nc = dc[t] - dc[ts];
                
                if (nr == 0 && nc == 0) {
                    origin_has_smoke[t] = true;
                    break;
                }
            }
        }
        // ���ԭ��û����������������
        if (!origin_has_smoke[t]) {
            origin_has_smoke[t] = true;
        }
    }
    
    // Ԥ����ÿ��ʱ�̲��������������λ�õ�ʱ��
    vector<vector<int>> smoke_arrival_times(n+1);
    for (int ts = 0; ts <= n; ts++) {
        if (origin_has_smoke[ts]) {
            for (int t = ts + 1; t <= n; t++) {
                int nr = dr[t] - dr[ts];
                int nc = dc[t] - dc[ts];
                
                if (nr == r && nc == c) {
                    smoke_arrival_times[ts].push_back(t);
                }
            }
        }
    }
    
    // �������λ�õ��������
    string result(n, '0');
    for (int ts = 0; ts <= n; ts++) {
        for (int t : smoke_arrival_times[ts]) {
            if (t <= n) {
                result[t-1] = '1';  // t-1����Ϊ����Ҫ����ʱ��t+0.5
            }
        }
    }
    
    cout << result << endl;
    return 0;
}