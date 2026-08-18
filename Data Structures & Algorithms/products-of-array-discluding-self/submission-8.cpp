class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int total = 1;
        int totalWithoutZero = 1;
        int numZeroes = 0;

        for (int k : nums) {
            total *= k;
            if (k == 0) {
                ++numZeroes;
            } else {
                totalWithoutZero *= k;
            }
        }

        vector<int> result(nums.size(), 0);

        if (numZeroes > 1) return result;

        for (int i = 0; i < nums.size(); ++i) {
            if (nums.at(i) == 0) {
                result.at(i) = totalWithoutZero;
            } 
            else if (numZeroes == 0) {
                result.at(i) = total / nums.at(i);
            }
            else {
                result.at(i) = 0;
            }
        }
        return result;

    }
};