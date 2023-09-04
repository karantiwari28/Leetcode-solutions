class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mp=0;
        for(int i=0 ; i<prices.size()-1 ; i++)
        {
            int profit = 0;
            if(prices[i] < prices[i+1])
            {
                profit = prices[i+1] - prices[i];
            }
            mp += profit;
        }
        return mp;
    }
};