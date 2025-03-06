#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // 思想：滑动窗口
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans = nums.size() + 1;
        int i = 0, j = 0, sum = nums[0];
        while (j < nums.size()) {
            if (sum >= target) {
                ans = min(ans, j - i + 1);
                sum -= nums[i++];
            } else {
                j++;
                if (j < nums.size()) sum += nums[j];
            }
        }
        if (ans == nums.size() + 1) return 0;
        return ans;
    }
};

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);

    // Your code here

    return 0;
}