class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        std::unordered_map<int, int> targetMap;

        for (int i = 0; i < nums.size(); ++i)
        {
            if (targetMap.find(nums.at(i)) != targetMap.end())
            {
                return {targetMap[nums.at(i)], i};
            }
            else{
                targetMap[target - nums.at(i)] = i;
            }
        }
        return {-1,-1};
        
    }
};
