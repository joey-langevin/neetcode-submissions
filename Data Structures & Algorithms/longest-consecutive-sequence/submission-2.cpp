class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> inputSet(nums.begin(), nums.end());
        unordered_set<int> parsed;
        int maxSequence = 0;
        for (int k : nums)
        {
            parsed.insert(k);
            while (inputSet.find(k + 1) != inputSet.end())
            {
                ++k;
            }
            int currentSeq = 1;
            while (inputSet.find(k - 1) != inputSet.end())
            {
                --k;
                ++currentSeq;
            }
            maxSequence = max(maxSequence, currentSeq);
        }
        return maxSequence;
    }
};
