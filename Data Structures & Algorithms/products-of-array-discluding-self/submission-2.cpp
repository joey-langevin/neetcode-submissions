class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        std::vector<int> output(nums.size(), 1);
        int prefix = 1;
        for (int i = 0; i < nums.size(); ++i){
            output.at(i) = prefix;
            prefix *= nums.at(i);
        }
        int suffix = 1;
        for (int j = nums.size() -1; j >= 0; --j){
            output.at(j) *= suffix;
            suffix *= nums.at(j);
        }
        return output;

    }
};
