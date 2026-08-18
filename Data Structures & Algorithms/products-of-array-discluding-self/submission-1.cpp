class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        std::vector<int> left(nums.size(), 1);
        std::vector<int> right(nums.size(), 1);
        for (int i = 1; i < left.size(); ++i)
        {
            left.at(i) *= nums.at(i-1) * left.at(i-1);
        }
        for (int j = right.size() - 2; j >= 0; --j)
        {
            right.at(j) *= nums.at(j+1) * right.at(j+1);
        }
        std::vector<int> ret;
        for (int index = 0; index < left.size(); ++index)
        {

            ret.emplace_back(left.at(index) * right.at(index));
        }
        return ret;

    }
};
