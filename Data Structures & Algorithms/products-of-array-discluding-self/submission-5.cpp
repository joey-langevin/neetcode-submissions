class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product = 1;
        int numZeros = 0;
        for (int k : nums)
        {
            if (k != 0)
            {
                product *= k;
            } else {
                ++numZeros;
            }
        }
        vector<int> result(nums.size(), 0);
        for (int i = 0; i < nums.size(); ++i)
        {
            if (nums.at(i) == 0)
            {
                if (numZeros == 1)
                {
                    result.at(i) = product;
                }
                else {
                    result.at(i) = 0;
                }
            }
            else {
                if (numZeros > 0)
                {
                    result.at(i) = 0;
                }
                else {
                    result.at(i) = product / nums.at(i);
                }
            }
        }
        return result;

    }
};
