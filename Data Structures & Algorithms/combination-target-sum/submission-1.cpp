class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {

        vector<vector<int>> result;
        vector<int> curr;
        backtrack(nums, result, 0, target, curr);
        return result;
        
    }

    void backtrack(vector<int>& nums, vector<vector<int>>& result, int i, int remain, vector<int>& curr) {

        if (remain == 0) {
            result.push_back(curr);
            return;
        }
        if (remain < 0 || i >= nums.size()) {
            return;
        }
        curr.push_back(nums[i]);

        backtrack(nums, result, i, remain - nums[i], curr);

        curr.pop_back();
        backtrack(nums, result, i+1, remain, curr);
    }
};
