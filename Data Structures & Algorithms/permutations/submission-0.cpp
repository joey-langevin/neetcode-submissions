class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {

        vector<vector<int>> result;
        vector<int> curr;
        vector<bool> used(nums.size(), false);

        backtrack(nums, result, curr, used);
        return result;
    }


    void backtrack(vector<int>& nums, vector<vector<int>>& result, vector<int>& curr, vector<bool>& used) {

        if (curr.size() == nums.size()) {
            result.push_back(curr);
            return;
        }

        for (int i = 0; i < nums.size(); ++i) {
            if (!used[i]) { // value not used yet
                used[i] = true;
                curr.push_back(nums[i]);
                backtrack(nums, result, curr, used);
                curr.pop_back();
                used[i] = false;
            }
        }


    }
};
