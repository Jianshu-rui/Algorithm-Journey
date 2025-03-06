#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // 思想：快慢指针
    int removeElement(vector<int>& nums, int val) {
        int slow, fast;
        for (slow = 0, fast = 0; fast < nums.size(); fast++) {
            if (nums[fast] != val) {
                nums[slow++] = nums[fast];
            }
        }
        return slow;
    }
};


int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);

    // Your code here

    return 0;
}