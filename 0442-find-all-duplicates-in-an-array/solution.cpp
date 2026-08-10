class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                if(nums[-1*nums[i]-1]<0){
                    v.push_back(-1*nums[i]);
                }else nums[nums[i] * -1 - 1] *= -1;
            }else{
                if(nums[nums[i]-1]<0){
                    v.push_back(nums[i]);
                }else nums[nums[i]-1] *= -1;
            }
        }
        return v;
    }
};
