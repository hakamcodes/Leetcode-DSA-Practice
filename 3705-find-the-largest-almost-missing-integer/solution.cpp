class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int countf=0,countl=0,n=nums.size();
        if(k==n){
            auto a = max_element(nums.begin(),nums.end());
            return *a;
        }
        int lar;
        if(k==1){
            sort(nums.begin(), nums.end());
            int i =n-1;
            int lar;
            while(1){
                if(i==n-1){
                    if(nums[i]!=nums[i-1]) return nums[i];
                    else i--;
                }else if(i==0){
                    if(nums[i]==nums[i+1]) return -1;
                    else return nums[i];
                }
                else if(nums[i]!=nums[i-1] && nums[i]!= nums[i+1]) return nums[i];
                else i--;
            }
            return -1;
        }
        for(int val: nums){
            if(nums[0]==val) countf++;
            if(nums[n-1]==val) countl++;
        }
        if(countf==1 && countl==1) return max(nums[0],nums[n-1]);
        else if(countf==1) return nums[0];
        else if(countl==1) return nums[n-1];
        else return -1;
    }
};
