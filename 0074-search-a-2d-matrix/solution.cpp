class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r = matrix.size();
        int c = matrix[0].size();
        int st =0, end=r*c-1;
        while(st<=end){
            int mid = st+(end-st)/2;
            int mR= mid/c;
            int mC = mid%c;
            if(matrix[mR][mC]==target){
                return true;
            }else if(matrix[mR][mC]>target){
                end = mid-1;
            }else{
                st = mid+1;
            }
        }
        return false;

    }
};
