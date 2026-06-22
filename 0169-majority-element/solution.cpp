class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int m=nums[0],count=0,n = nums.size();
       for(int i=0;i<n;i++){
        if(m==nums[i]){
            count++;
        }
        else if(nums[i]!=m && (count==0)){
            count++;
            m = nums[i];
        }
        else{
            count--;
            if(count==0) m = nums[i];
        }
       }
       return m;

    }
};
