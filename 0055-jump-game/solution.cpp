class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int k = 0;

        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] <= k) {
                k++;
            } else {
                k = 0;
            }
        }

        return k == 0;
    }
};
