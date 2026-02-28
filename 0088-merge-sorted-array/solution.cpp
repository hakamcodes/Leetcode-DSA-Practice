class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0,j=0;
       while(n!=0){
        if(nums1[i]>=nums2[j]){
            int k=m-1;
            while(k!= (i-1)){
                nums1[k+1] = nums1[k];
                k--;
            }
            nums1[i] = nums2[j];
            j++,m++,n--;
        }
        if(i==m){
            nums1[i] = nums2[j];
            j++,m++,n--;
        }
        i++;
       } 
    }
};
