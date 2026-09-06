class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        
        int left = *max_element(weights.begin(), weights.end());
        int right = std::accumulate(weights.begin(), weights.end(), 0);
        int res = -1;
        while (left <= right) {
            int capacity = left + (right - left) / 2;

            int currDays = 1;
            int currLoadWeight = 0;
            for (int i = 0; i < weights.size(); ++i) {
                if (currLoadWeight + weights[i] <= capacity) {
                    currLoadWeight += weights[i];
                }
                else {
                    ++currDays;
                    currLoadWeight = weights[i];
                }
            }
            if (currDays <= days) {
                res = capacity;
                right = capacity - 1;
            } 
            else {
                left = capacity + 1;
            }
        }
        return res;
    }
};