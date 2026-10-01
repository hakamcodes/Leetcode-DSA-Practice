class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int firstR=0, firstC=0, lastR=matrix.size()-1, lastC=matrix[0].size()-1;
        int total = matrix.size()*matrix[0].size(), count=0;
        while(count<total){
            for(int i=firstC; i<=lastC && count<total; i++){
                ans.push_back(matrix[firstR][i]);
                count++;
            }
            firstR++;
            for(int i=firstR; i<=lastR && count<total; i++){
                ans.push_back(matrix[i][lastC]);
                count++;
            }
            lastC--;
            for(int i=lastC; i>=firstC && count<total; i--){
                ans.push_back(matrix[lastR][i]);
                count++;
            }
            lastR--;
            for(int i=lastR; i>=firstR && count<total; i--){
                ans.push_back(matrix[i][firstC]);
                count++;
            }
            firstC++;
        }
        return ans;
    }
};
