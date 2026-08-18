class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> result;
        vector<int> subset;
        backtrack(nums, target, 0, result, subset);
        return result;
        
    }
    void backtrack(vector<int>& nums, int target, int index, vector<vector<int>>& result, vector<int>& subset)
    {
        if (target == 0) {
            result.push_back(subset);
            return;
        }
        if (target < 0 || index >= nums.size()) {
            return;
        }
        subset.push_back(nums[index]);
        backtrack(nums, target - nums[index], index, result, subset);
        subset.pop_back();
        backtrack(nums, target, index + 1, result, subset);
    }
};
