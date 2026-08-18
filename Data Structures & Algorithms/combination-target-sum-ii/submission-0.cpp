class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> comb;

        sort(candidates.begin(), candidates.end());
        backtrack(candidates, result, target, 0, comb);
        return result;

    }
    void backtrack(vector<int>& candidates, vector<vector<int>>& result, int remain, int index, vector<int>& comb) {
        if (remain == 0) {
            result.push_back(comb);
            return;
        }
        if (remain < 0 || index >= candidates.size()) return;

        // Case 1
        // Continue to add current element
        comb.push_back(candidates[index]);
        backtrack(candidates, result, remain - candidates[index], index + 1, comb);
        comb.pop_back();

        // Case 2
        // Set index pointer to new unique element to avoid repeated entries
        while (index + 1 < candidates.size() && candidates[index] == candidates[index + 1]) {
            ++index;
        }
        backtrack(candidates, result, remain, index + 1, comb);
    }
};
