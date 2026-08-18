class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix(nums.size(), 1);
        vector<int> suffix(nums.size(), 1);

        for (int i = 1; i < nums.size(); ++i)
        {
            prefix.at(i) = prefix.at(i-1) * nums.at(i-1);
        }

        for (int i = static_cast<int>(nums.size()) - 2; i >= 0; --i) {
            suffix.at(i) = suffix.at(i+1) * nums.at(i+1);
        }

        vector<int> result(nums.size());
        for (int i = 0; i < result.size(); ++i)
        {
            result.at(i) = prefix.at(i) * suffix.at(i);
        }
        return result;
    }
};
