class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left = 0;
        int right = 1;
        int maxProfit = 0;
        int len = prices.size();

        while (right < len) {
            if (prices[right] < prices[left]) {
                left = right;
            }
            else {
                maxProfit = max(maxProfit, prices[right] - prices[left]);
            }
            ++right;
        }
        return maxProfit;
    
    }
};
