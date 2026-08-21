class Solution {
public:
    void rot(vector<int>& arr, int i, int j){
        while(i<j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++; j--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k %= n;
        rot(nums, 0, n-1);
        rot(nums, 0, k-1);
        rot(nums, k, n-1);  
        
    }
};
