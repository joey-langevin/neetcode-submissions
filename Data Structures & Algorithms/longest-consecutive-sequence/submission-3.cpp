class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> inputSet(nums.begin(), nums.end());

        int maxSeq = 0;
        for (int k : nums) {
            if (inputSet.find(k - 1) == inputSet.end()) {
                int length = 1;
                while (inputSet.find(k + 1) != inputSet.end()) {
                    ++k;
                    ++length;
                }
                maxSeq = max(maxSeq, length);
            }
        }
        return maxSeq;
    }
};
