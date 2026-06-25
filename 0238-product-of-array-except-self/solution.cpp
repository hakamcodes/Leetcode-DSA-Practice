class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> answer;
        int pre=1,suf=1;
        for(int i=0;i<nums.size();i++){
            answer.push_back(pre);
            pre *= nums[i];
        }
        for(int i=nums.size()-1;i>=0;i--){
            answer[i] *= suf;
            suf *= nums[i];

        }
        return answer;
    }
};
