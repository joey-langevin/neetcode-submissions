class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result(nums.size(), 1);
        vector<int> prefix(nums.size(), 1);
        vector<int> suffix(nums.size(), 1);

        int prod = 1;
        for (int i = 0; i < nums.size() - 1; ++i)
        {
            prefix.at(i + 1) = prefix.at(i) * nums.at(i);
        }
        for (int k = nums.size() - 1; k >= 1; --k)
        {
            suffix.at(k - 1) = suffix.at(k) * nums.at(k);
        }
        for (int j = 0; j < nums.size(); ++j)
        {
            result.at(j) = prefix.at(j) * suffix.at(j);
        }
        return result;
    }
};
