class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod = 1;
        int numZeros = 0;
        for (int k : nums) {
            if (k == 0)
                ++numZeros;
            else
                prod *= k;
            
        }

        vector<int> result;

        for (int i = 0; i < nums.size(); ++i)
        {
            int val = 0;
            if (nums.at(i) == 0)
            {
                
                val = numZeros > 1 ? 0 : prod;
            }
            else
            {
                val = numZeros > 0 ? 0 : prod / nums.at(i);
            }
            result.emplace_back(val);
        }
        return result;
    }
};
