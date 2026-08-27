class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int> ans;
        int rem=0, sum=0, i=num.size()-1;
        while(i>=0 && k != 0){
            sum = rem + k%10 + num[i];
            rem = sum/10;
            ans.push_back(sum%10);
            k /= 10;
            i--;
        }
        while(k!=0){
            rem = sum/10;
            sum = k%10 + rem;
            ans.push_back(sum%10);
            k /=10;
        }
        while(i >= 0){
            rem = sum/10;
            sum = num[i] + rem;
            ans.push_back(sum%10);
            i--;
        }
        rem = sum/10;
        if(rem>0) ans.push_back(rem);
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
