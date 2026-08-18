class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> seenValues;

        for (int k : nums)
        {
            if (seenValues.find(k) != seenValues.end())
            {
                return true;
            }
            seenValues.insert(k);
        }
        return false;
    }
};