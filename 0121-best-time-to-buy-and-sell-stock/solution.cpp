class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bestBuy = prices[0],maxProfit=0,n= prices.size();
        for(int i=1;i<n;i++){
            if(bestBuy > prices[i]) bestBuy = prices[i];
            else if(maxProfit < prices[i]-bestBuy) maxProfit = prices[i]-bestBuy;}
        return maxProfit;
    }
};
