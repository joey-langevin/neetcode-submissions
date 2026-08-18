class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> targetMap;

        for (int i = 0; i < nums.size(); ++i)
        {
            int toFind = target - nums.at(i);

            if (targetMap.find(toFind) != targetMap.end())
            {
                return {targetMap[toFind], i};
            }
            targetMap[nums.at(i)] = i;
        }
        return {-1, -1};
    }
};
