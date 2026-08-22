class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        unordered_map<int, int> prefixCounts {{0, 1}};

        int total = 0;
        int result = 0;
        for (int num : nums) {

            total += num;

            if (prefixCounts.contains(total - k)) {
                result += prefixCounts[total - k];
            }

            prefixCounts[total]++;
        }

        return result;
        
    }
};
