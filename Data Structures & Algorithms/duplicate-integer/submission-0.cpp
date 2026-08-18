class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::set<int> numSet;
        for (const auto num : nums)
        {
            if (numSet.find(num) != numSet.end())
            {
                return true;
            }
            else
            {
                numSet.insert(num);
            }
        }
        return false;

    }
};
