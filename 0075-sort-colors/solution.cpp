class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int low = 0, mid = n - 1, high = n - 1;

        while (mid >= low) {
            
            if (nums[mid] == 2) {
                swap(nums[mid], nums[high]);
                high--;
                mid--;     // safe to move left
            }
            else if (nums[mid] == 0) {
                swap(nums[mid], nums[low]);
                low++;     // 0 region grows from left
                // DO NOT mid-- here immediately
            }
            else { // nums[mid] == 1
                mid--;
            }
        }
    }
};
