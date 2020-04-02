class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0;
        int size = prices.size();
        // 1e9 is the most biggest number in int type.
        int miniprice = 1e9;
        for(int i = 0; i < size; i++)
        {
            if( prices[i] < miniprice )
            {
                miniprice = prices[i];
            }
            else if( max < prices[i] - miniprice)
            {
                max = prices[i] - miniprice;
            }
        }
        return max;
    }
};
