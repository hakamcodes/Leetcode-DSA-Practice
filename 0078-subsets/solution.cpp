class Solution {
private: 
    void sub(vector<int> &nums, vector<vector<int>> &ans, vector<int> temp, int i){
        if(i>=nums.size()){
            ans.push_back(temp);
            return;
        }
        sub(nums, ans, temp, i+1);
        temp.push_back(nums[i]);
        sub(nums, ans, temp, i+1);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        sub(nums, ans, temp, 0);
        return ans;

    }
};
