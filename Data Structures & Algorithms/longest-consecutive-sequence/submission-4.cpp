class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_set<int> elems(nums.begin(), nums.end());
        int longest = 0;
        for (int k : nums)
        {
            int current = k;
            int streak = 1;
            while (elems.find(current + 1) != elems.end())
            {
                ++streak;
                ++current;
            }
            longest = max(longest, streak);
        }
        return longest;
    }
};
