class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int prod = 1;
        int zeroCount = 0;
        for (int k : nums)
        {
            if (k == 0) {
                zeroCount++;
            } else {
                prod *= k;
            }
        }
        if (zeroCount > 1)
        {
            return vector<int>(nums.size(), 0);
        }

        vector<int> result(nums.size(), 0);
        for (int i = 0; i < nums.size(); ++i)
        {
            if (zeroCount > 0)
            {
                result.at(i) = nums.at(i) == 0 ? prod : 0;
            } else {
                result[i] = prod / nums[i];
            }
        }
        return result;
    }
};
