class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int miny = prices[0];
        int maxprofit = 0;
        int profit = 0;
     for(int i = 1; i < prices.size(); i++)
     {
        miny = min(miny, prices[i]);
        profit = prices[i] - miny;
        maxprofit = max(maxprofit,profit);
     }
        return maxprofit;
    }
};