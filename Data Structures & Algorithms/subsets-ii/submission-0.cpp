class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        vector<int> subset;
        backtrack(nums, result, 0, subset);
        return result;
    }

    void backtrack(vector<int>& nums, vector<vector<int>>& result, int i, vector<int>& subset) {

        if (i == nums.size()) {
            result.push_back(subset);
            return;
        }

        // Case, add next element on input
        subset.push_back(nums[i]);
        backtrack(nums, result, i + 1, subset);

        subset.pop_back();

        // case, avoid repeated work by moving index pointer to unique element

        while (i + 1 < nums.size() && nums[i] == nums[i+1]) {
            ++i;
        }
        backtrack(nums, result, i + 1, subset);
    }
};
