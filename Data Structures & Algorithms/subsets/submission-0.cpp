class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> subset;
        dfs(nums, 0, result, subset);
        return result;
    }

    void dfs(vector<int>& nums, int index, vector<vector<int>>& result, vector<int> subset) {
        if (index >= nums.size()) {
            result.emplace_back(subset);
            return;
        }
        subset.push_back(nums[index]);
        dfs(nums, index + 1, result, subset);

        subset.pop_back();

        dfs(nums, index + 1, result, subset);
    }
};
