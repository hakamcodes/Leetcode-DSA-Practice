class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int st = 0, end = nums.size();
        while (st < end) {
            int mid = st + (end - st) / 2;

            if (nums[mid] < 0)
                st = mid + 1;
            else
                end = mid;
        }

        int left = st - 1;
        int right = st;

        vector<int> ans;

        while (left >= 0 && right < nums.size()) {
            if (nums[left] * nums[left] <= nums[right] * nums[right]) {
                ans.push_back(nums[left] * nums[left]);
                left--;
            } else {
                ans.push_back(nums[right] * nums[right]);
                right++;
            }
        }

        while (left >= 0) {
            ans.push_back(nums[left] * nums[left]);
            left--;
        }

        while (right < nums.size()) {
            ans.push_back(nums[right] * nums[right]);
            right++;
        }

        return ans;
    }
};
