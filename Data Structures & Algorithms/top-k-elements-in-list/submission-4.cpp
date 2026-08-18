class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int, int> countMap;
        vector<vector<int>> buckets(nums.size() + 1);\
        vector<int> solution;

        for (const int k : nums)
        {
            ++countMap[k];
        }
        for (const auto& [num, occurences] : countMap)
        {
            buckets.at(occurences).push_back(num);
        }
        for (int bucketIndex = buckets.size() - 1; bucketIndex >= 0; --bucketIndex)
        {
            for (const int val : buckets.at(bucketIndex))
            {
                solution.push_back(val);
            }
            if (solution.size() == k)
            {
                return solution;
            }
        }
        return solution;
    }
};
