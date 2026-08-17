class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int st=0, end=nums.size()-1;
        while(st<=end){
            if(nums[end]==val) end--;
            else if(nums[st]==val){
                swap(nums[st],nums[end]);
                st++;
                end--;
            }else st++;
        }
        return st;
    }
};
