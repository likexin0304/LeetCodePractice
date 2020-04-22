class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = 99999;
        int maxProfit = 0;
        if(prices.size() == 0)
        {
            return maxProfit;
        }
        for(int i = 0; i < prices.size(); i++)
        {
            if( min > prices[i])
            {
                min = prices[i];

            }
            else
            {
                int temp = 0;
                temp = prices[i] - min;
                maxProfit = maxProfit + temp;
                min = prices[i];
            }

        }
        return maxProfit;
    }
};
