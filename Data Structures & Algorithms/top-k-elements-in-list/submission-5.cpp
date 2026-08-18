class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // get counts of each element

        unordered_map<int, int> countMap;

        for(int k : nums)
        {
            countMap[k]++;
        }
        
        vector<vector<int>> freq(nums.size() + 1);

        for (const auto& [val, count] : countMap)
        {
            freq.at(count).emplace_back(val);
        }
        vector<int> result;
        for (int i = freq.size() - 1; i >= 0; --i)
        {
            for (int num : freq.at(i))
            {
                if (k == 0) return result;
                result.emplace_back(num);
                --k;
                
            }
        }
        return result;
    }
};
