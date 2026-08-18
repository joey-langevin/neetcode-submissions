class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        vector<vector<int>> counts(nums.size() + 1);

        unordered_map<int, int> mapCount;

        for (int k : nums)
        {
            ++mapCount[k];
        }
        for (const auto& [k, count] : mapCount)
        {
            counts.at(count).emplace_back(k);
        }

        vector<int> result;
        for (int i = static_cast<int>(counts.size()) - 1; i >= 0; --i)
        {
            for (int val : counts.at(i)) {
                result.emplace_back(val);
                --k;
                if (k == 0)
                {
                    break;
                }
            }
            if (k == 0) {
                break;
            }
        }
        return result;
    }
};
