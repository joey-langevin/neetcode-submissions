class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> targetMap;
        vector<int> solution;
        for (int i = 0;  i < nums.size(); ++i)
        {
            if (targetMap.find(nums.at(i)) != targetMap.end())
            {
                return {targetMap[nums.at(i)], i};
            }
            targetMap[target - nums.at(i)] = i;
        }
        return solution;

    }
};
