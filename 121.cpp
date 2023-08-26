class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mins = prices[0];
        int maxprofit = 0;
        for(int i=0;i<prices.size();i++)
        {
            maxprofit = max(maxprofit,prices[i]-mins);
            mins = min(mins,prices[i]);
        }
        return maxprofit;
    }
};