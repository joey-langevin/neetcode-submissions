class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       
       vector<int> left(nums.size(), 1);
       vector<int> right(nums.size(), 1);

       for (int i = 1; i < nums.size(); ++i) {
            left.at(i) = left.at(i - 1) * nums.at(i - 1);
       }
       for (int j = nums.size() - 2; j >= 0; --j) {
            right.at(j) = right.at(j + 1) * nums.at(j + 1);
       }

       vector<int> result(nums.size());
       for (int i = 0; i < nums.size(); ++i) {
            result.at(i) = left.at(i) * right.at(i);
       }
       return result;
    }
};
