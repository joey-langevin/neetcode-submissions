class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> set;
        for (int k : nums)
        {
            if (set.find(k) != set.end())
            {
                return true;
            }
            set.insert(k);
        }
        return false;
    }
};