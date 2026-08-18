class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        std::unordered_map<int, int> myMap;
        std::vector<std::vector<int>> buckets(nums.size() + 1);

        for (int val : nums)
        {
            ++myMap[val];
        }
        for (const auto& [key, val] : myMap)
        {
            buckets.at(val).emplace_back(key);
        }
        std::vector<int> ret;
        int kCount = 0;
        for (int i = buckets.size() - 1; i >= 0; --i)
        {
            for (int j = 0; j < buckets.at(i).size(); j++)
            {
                ret.emplace_back(buckets.at(i).at(j));
                ++kCount;
            }
            if (kCount == k)
            {
                return ret;
            }
        }
        return {-1};

        
    }
};
