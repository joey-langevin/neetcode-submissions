class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_set<int> elems(nums.begin(), nums.end());
        int longest = 0;
        for (int k : nums)
        {
            int streak = 1;
            if (elems.find(k-1) != elems.end())
            {
                int value = k;
                while (elems.find(value) != elems.end()) { // streak : 1, 
                    ++value;
                    ++streak;
                }
                
            }
            longest = max(longest, streak);
        }
        return longest;
    }
};
