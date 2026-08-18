class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        std::unordered_map<int, int> myMap;
        std::vector<std::vector<int>> buckets(nums.size() + 1);

        for (int val : nums)
        {
            ++myMap[val];
        }
        for (auto const& it : myMap)
        {
            buckets.at(it.second).emplace_back(it.first);
        }
        std::vector<int> ret;
        for (int i = buckets.size() - 1; i >= 0; --i)
        {
            for (auto val : buckets.at(i))
            {
                ret.emplace_back(val);
                if (ret.size() == k)
                {
                    return ret;
                }
            }
        }
        return {-1};

        
    }
};
