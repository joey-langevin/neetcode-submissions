class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left = 0;
        int right = 0;
        int maxProfit = 0;
        while (right < prices.size()){
            if (prices.at(right) < prices.at(left))
            {
                left = right;
                right++;
            }
            if (right < prices.size())
            {
                int currentProfit = prices.at(right) - prices.at(left);
                maxProfit = max(maxProfit, currentProfit);
                right++;
            }
        }
        return maxProfit;
    }
};
