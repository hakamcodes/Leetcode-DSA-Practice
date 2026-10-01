class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // transpose
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[0].size();j++){
                if(i<j){
                    swap(matrix[i][j], matrix[j][i]);
                }
            }
        }
        // reverse the rows 
        for(int i=0; i<matrix.size(); i++){
            int st=0, end=matrix[0].size()-1;
            while(st<end){
                swap(matrix[i][st], matrix[i][end]);
                st++; end--;
            }
        }
    }
};
