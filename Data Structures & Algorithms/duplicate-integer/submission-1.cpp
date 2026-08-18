class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> seen;

        for (const int k : nums)
        {
            if (seen.find(k) != seen.end())
            {
                return true;
            }

            seen.insert(k);
        }
        return false;
    }
};
