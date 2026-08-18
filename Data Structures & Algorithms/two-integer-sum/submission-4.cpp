class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> seenMap;

        for (int i = 0; i < nums.size(); ++i)
        {
            int valueNeeded = target - nums.at(i);
            if (seenMap.find(valueNeeded) != seenMap.end())
            {
                return {seenMap[valueNeeded], i};
            }
            seenMap[nums.at(i)] = i;
        }
        return {-1, -1};
    }
};
