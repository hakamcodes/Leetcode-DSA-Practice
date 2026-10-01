class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int currR=0, currC=matrix[0].size()-1;
        while(currR<matrix.size() && currC>=0){
            if(matrix[currR][currC]==target){
                return true;
            }else if(matrix[currR][currC]<target){
                currR++;
            }else{
                currC--;
            }
        }
        return false;
    }
};
